#include "main.h"

/**
 * main - Main function
 * @argc: argument count
 * @argv: argument list
 * Return: 0
*/
int main(int argc, char **argv)
{
	ElfHeader elf;
	FILE *fin;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(98);
	}

	fin = fopen(argv[1], "rb");
	if (!fin)
	{
		dprintf(2, "Error: cannot open file\n");
		exit(98);
	}
	read_file(fin, &elf);
	fclose(fin);
	print_header(&elf);
	return (0);
}

/**
 * read_file - Reads file
 * @fin: file
 * @elf: elf header
*/
void read_file(FILE *fin, ElfHeader *elf)
{
	READ(fin, elf->ident);
	READ(fin, elf->e_type);
	if (elf->ident[4] == 1)
	{
		READ(fin, elf->entry.entry32);
	}
	else if (elf->ident[4] == 2)
	{
		READ(fin, elf->entry.entry64);
	}
	else
	{
		dprintf(2, "Error: bad class: %d\n", elf->ident[4]);
		exit(EXIT_FAILURE);
	}
}

/**
 * print_header - Prints header
 * @elf: Elf header
*/
void print_header(const ElfHeader *elf)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < 16; i++)
		printf(" %02x", elf->ident[i]);

	printf("\n	%-35s %s\n", "Class:", get_class(elf->ident[4]));
	printf("	%-35s %s \n", "Data:", get_data(elf->ident[5]));
	printf("	%-35s %u %s\n", "Version:", elf->ident[6], get_ver(elf->ident[6]));
	printf("	%-35s %s\n", "OS:", os_abi(elf->ident[7]));
	printf("	%-35s %u\n", "ABI Version:", elf->ident[8]);
	printf("	%-35s %s\n", "Type:", file_type(elf->e_type));
	entry_point_add(elf->ident[4], elf);
}

/**
 * entry_point_add - Add entry point
 * @entry: entry to add.
 * @elf: Header
*/
void entry_point_add(uint8_t entry, const ElfHeader *elf)
{
	switch (entry)
	{
	case 1:
		printf("	%-35s 0x%02x\n", "Entry point address:", elf->entry.entry32);
		break;
	case 2:
		printf("	%-35s 0x%02lx\n", "Entry point address:", elf->entry.entry64);
	default:
		break;
	}
}

/**
 * get_ver - Gets version
 * @ver: version variable
 * Return: version char
*/
const char *get_ver(uint8_t ver)
{
	switch (ver)
	{
	case EV_NONE: return "(Invalid version)";
	case EV_CURRENT: return "(Current version)";
	default: return "";
	}
}

/**
 * get_class - Get's class
 * @class: Class variable
 * Return: class string
*/
const char *get_class(uint8_t class)
{
	switch (class)
	{
	case ELFCLASSNONE: return ("Invalid class");
	case ELFCLASS32: return ("ELF32");
	case ELFCLASS64: return ("ELF64");
	default: return ("");
	}
}

/**
 * get_data - Get's data
 * @e_data: data variable
 * Return: data string
*/
const char *get_data(uint8_t e_data)
{
	switch (e_data)
	{
	case ELFDATANONE: return ("Unknown data format");
	case ELFDATA2LSB: return ("2's complement, little endian");
	case ELFDATA2MSB: return ("2's complement, big endian");
	default: return ("");
	}
}

/**
 * os_abi - OS/ABI system
 * @os: os varible
 * Return: OS/ABI type.
*/
const char *os_abi(uint8_t os)
{
	switch (os)
	{
	case ELFOSABI_NONE: return ("UNIX - System V");
	case ELFOSABI_HPUX: return ("HP-UX");
	case ELFOSABI_NETBSD: return ("UNIX - NetBSD");
	case ELFOSABI_GNU: return	("LINUX");
	case ELFOSABI_SOLARIS: return ("UNIX - Solaris");
	case ELFOSABI_AIX: return ("IBM AIX");
	case ELFOSABI_IRIX: return ("SGI Irix");
	case ELFOSABI_FREEBSD: return ("FreeBSD");
	case ELFOSABI_TRU64: return ("Compaq TRU64 UNIX");
	case ELFOSABI_MODESTO: return	("Novell Modesto");
	case ELFOSABI_OPENBSD: return	("OpenBSD");
	case ELFOSABI_ARM_AEABI: return	("ARM EABI");
	case ELFOSABI_ARM: return ("ARM");
	case ELFOSABI_STANDALONE: return ("STANDALONE");
	}
	return ("<unknown: 53>");
}

/**
 * file_type - file type
 * @e_type: variable
 * Return: constant string
*/
const char *file_type(uint16_t e_type)
{
	switch (e_type)
	{
	case ET_NONE: return ("NONE (No file type)");
	case ET_REL: return ("REL (Relocatable file)");
	case ET_EXEC: return ("EXEC (Executable file)");
	case ET_DYN: return ("DYN (Shared object file)");
	case ET_CORE: return ("CORE (Core file)");
	case ET_NUM: return ("NUM (Number of defined types)");
	case ET_LOOS: return ("LOOS (OS-specific range start)");
	case ET_HIOS: return ("HIOS (OS-specific range end)");
	case ET_LOPROC: return ("LOPROC (Processor-specific range start)");
	case ET_HIPROC: return ("HIPROC (Processor-specific range end)");
	default: return ("");
	}
}
