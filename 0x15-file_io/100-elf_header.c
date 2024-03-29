#include "main.h"

/**
  * print_error - print error message to stderr
  * @msg: message to print
  * @len: message len
  */

void print_error_elf(char *msg, size_t len)
{
	write(STDERR_FILENO, msg, len);
	exit(98);
}

/**
  * _putchar - print a character to STDOUT
  * @c: character to print
  */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

/**
  * read_elf - function to read ELF
  * @fd: the file to read
  * @buf: buffer
  */
void read_elf(int fd, unsigned char *buf)
{
	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error_elf("Error: Unable to seek file\n", 27);

	if (read(fd, buf, BUF_SIZE) != BUF_SIZE)
		print_error_elf("Error: Unable to read ELF header\n", 34);
}

/**
  * main - the entry point to our function
  * @ac: argument count
  * @av: argument vector
  *
  * Return: 0 on success
  */
int main(int ac, char **av)
{
	int fd, i, elf_class;
	unsigned char buf[BUF_SIZE];
	unsigned short type;
	unsigned long entry;

	if (ac != 2)
		print_error_elf("Usage: elf_header elf_filename\n", 32);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		print_error_elf("Error: Unable to open file\n", 27);
	read_elf(fd, buf);
	if (memcmp(buf, ELF_MAGIC, MAGIC_LEN) != 0)
		print_error_elf("Error: not an ELF file\n", 22);
	printf("Magic:	");
	for (i = 0; i < MAGIC_LEN; i++)
		printf("%02x ", buf[i]);
	_putchar('\n');
	printf("Class:                             ");
	elf_class = buf[4];
	printf(elf_class == 1 ? "ELF32" : "ELF64");
	_putchar('\n');
	printf("Data:                              ");
	printf(buf[5] == 1 ? "2's complement, little endian" : "2's complement,	big endian");
	_putchar('\n');
	printf("Version:                           ");
	printf("%d (current)", buf[6]);
	_putchar('\n');
	printf("OS/ABI:                            ");
	printf("UNIX - System V");
	_putchar('\n');
	printf("ABI Version:                       ");
	printf("%d", buf[8]);
	_putchar('\n');
	printf("Type:                              ");
	type = *((unsigned short *)(buf + 16));
	printf(type == 1 ? "Relocatable" : type == 2 ? "Executable" : "Shared object");
	_putchar('\n');
	printf("Entry point address:               ");
	if (elf_class == 1)
		entry = *((unsigned long *)(buf + 24));
	else
		entry = *((unsigned long *)(buf + 40));
	printf("0x%lx\n", entry);
	close(fd);
	return (0);
}
