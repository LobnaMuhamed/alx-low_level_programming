/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void chk_elf(unsigned char *e_ident);
void prt_magc(unsigned char *e_ident);
void prt_class(unsigned char *e_ident);
void prt_data(unsigned char *e_ident);
void prt_version(unsigned char *e_ident);
void prt_abi(unsigned char *e_ident);
void prt_osabi(unsigned char *e_ident);
void prt_type(unsigned int e_type, unsigned char *e_ident);
void prt_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * chk_elf - a function that check if file elf
 * @e_idt: string input
 *
 */
void chk_elf(unsigned char *e_idt)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_idt[i] != 127 &&
		    e_idt[i] != 'E' &&
		    e_idt[i] != 'L' &&
		    e_idt[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * prt_magic - the function that prints magic number
 * @e_idt: string input
 *
 */
void prt_magic(unsigned char *e_idt)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_idt[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * prt_class - function that print the class
 * @e_idt: string input
 */
void prt_class(unsigned char *e_idt)
{
	printf("  Class:                             ");

	switch (e_idt[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_idt[EI_CLASS]);
	}
}

/**
 * prt_data - a function that prints data of elf
 * @e_idt: string input
 */
void prt_data(unsigned char *e_idt)
{
	printf("  Data:                              ");

	switch (e_idt[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_idt[EI_CLASS]);
	}
}

/**
 * prt_version - a function that prints a version of elf
 * @e_idt: string input
 */
void prt_version(unsigned char *e_idt)
{
	printf("  Version:                           %d",
	       e_idt[EI_VERSION]);

	switch (e_idt[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prt_osabi - a function that prints the OS/ABI of an ELF header.
 * @e_idt: string input
 */
void prt_osabi(unsigned char *e_idt)
{
	printf("  OS/ABI:                            ");

	switch (e_idt[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_idt[EI_OSABI]);
	}
}

/**
 * prt_abi - a function that prints the ABI version of an ELF header.
 * @e_idt: string input
 */
void prt_abi(unsigned char *e_idt)
{
	printf("  ABI Version:                       %d\n",
	       e_idt[EI_ABIVERSION]);
}

/**
 * prt_type - a function that prints the type of an ELF header.
 * @e_typing: The ELF type.
 * @e_idented: string input.
 */
void prt_type(unsigned int e_typing, unsigned char *e_idented)
{
	if (e_idented[EI_DATA] == ELFDATA2MSB)
		e_typing >>= 8;

	printf("  Type:                              ");

	switch (e_typing)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_typing);
	}
}

/**
 * prt_entry - a function that prints the entry point of an ELF header.
 * @t_entry: input int
 * @t_ident: string input
 */
void prt_entry(unsigned long int t_entry, unsigned char *t_ident)
{
	printf("  Entry point address:               ");

	if (t_ident[EI_DATA] == ELFDATA2MSB)
	{
		t_entry = ((t_entry << 8) & 0xFF00FF00) |
			  ((t_entry >> 8) & 0xFF00FF);
		t_entry = (t_entry << 16) | (t_entry >> 16);
	}

	if (t_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)t_entry);

	else
		printf("%#lx\n", t_entry);
}

/**
 * closing_elf - Closes an ELF file.
 * @elfs: The file descriptor of the ELF file.
 */
void closing_elf(int elfs)
{
	if (close(elfs) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elfs);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closing_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closing_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	chk_elf(header->e_ident);
	printf("ELF Header:\n");
	prt_magic(header->e_ident);
	prt_class(header->e_ident);
	prt_data(header->e_ident);
	prt_version(header->e_ident);
	prt_osabi(header->e_ident);
	prt_abi(header->e_ident);
	prt_type(header->e_type, header->e_ident);
	prt_entry(header->e_entry, header->e_ident);

	free(header);
	closing_elf(o);
	return (0);
}
