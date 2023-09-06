#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

#include <fcntl.h>
#include <sys/stat.h>

#define READ(f, var) fread(&(var), sizeof(var), 1, (f))
typedef struct ElfHeader
{
	uint8_t  ident[16];
	uint16_t e_type;
	union
	{
		uint32_t entry32;
		uint64_t entry64;
	} entry;
} ElfHeader;
void read_file(FILE *fin, ElfHeader *elf);
void print_header(const ElfHeader *elf);
const char *os_abi(uint8_t os);
const char *file_type(uint16_t e_type);
const char *get_data(uint8_t e_data);
const char *get_class(uint8_t class);
const char *get_ver(uint8_t ver);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
