#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_elf_header_info(Elf64_Ehdr *header);

/**
 * main - Displays information contained in the ELF header of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
		return (98);
	}
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Unable to read ELF header from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	printf("Class:                             %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		header->e_type == ET_DYN ? "DYN (Shared object file)" :
		header->e_type == ET_REL ? "REL (Relocatable file)" : "Unknown");
	printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);

}
