#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <elf.h>

#define BUF_SIZE 64
#define ELF_MAGIC "\x7F\x45\x4C\x46"
#define MAGIC_LEN 4

void _putchar(char c);
void print_error_elf(char *msg, size_t len);
void read_elf(int fd, unsigned char *buf);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(char *text, char *name, int number);

#endif
