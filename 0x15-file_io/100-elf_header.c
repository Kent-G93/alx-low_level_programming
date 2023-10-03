#include "main.h"

void check_elf(unsigned char *e_ident);

void print_field(const char *name, unsigned char value);

void print_entry(uintptr_t e_entry, unsigned char *e_ident);

void close_elf(int elf);

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails, it exits with code 98.
 */

int main(int argc, char *argv[])
{
	int fd;

	int index;

	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0 || header.e_ident[EI_CLASS] != ELFCLASS64)
	{
		dprintf(STDERR_FILENO, "Error: Invalid ELF file\n");
		close(fd);
		return (98);
	}

	check_elf(header.e_ident);
	printf("ELF Header:\n");
	for (index = 0; index < EI_NIDENT; index++)

	{
		printf(" Magic[%d]: %02x", index, header.e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	print_field(" Class", header.e_ident[EI_CLASS]);
	print_field(" Data", header.e_ident[EI_DATA]);
	print_field(" Version", header.e_ident[EI_VERSION]);
	print_field(" OS/ABI", header.e_ident[EI_OSABI]);
	print_field(" ABI Version", header.e_ident[EI_ABIVERSION]);
	print_field(" Type", header.e_type);
	print_entry(header.e_entry, header.e_ident);

	close(fd);
	return (0);
}
/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, it exits with code 98.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 || e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}
/**
 * print_field - Prints an ELF header field.
 * @name: The name of the field.
 * @value: The value of the field.
 */

void print_field(const char *name, unsigned char value)
{
	printf(" %s: %02x\n", name, value);
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(uintptr_t e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00FF00FF00UL) | ((e_entry >> 8) & 0x00FF00FF00FF00FFUL);
		e_entry = (e_entry << 16) | (e_entry >> 16);
		e_entry = (e_entry << 32) | (e_entry >> 32);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", (unsigned long)e_entry);
}
