#include "main.h"
#include <elf.h>
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))

/**
 * checker - ELF file checker
 * @unchar: ELF param
 * return: void
 */
void checker(unsigned char *unchar)
{
	if (*(unchar) == 0x7f && *(unchar + 1) == 'E' &&
		*(unchar + 2) == 'L' && *(unchar + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
 * magic - Gives magic number
 * @unchar: ELF param
 * return: void
 */
void magic(unsigned char *unchar)
{
	int counter, i_limit = EI_NIDENT - 1;

	printf("  Magic:   ");
	for (counter = 0; counter < i_limit; counter++)
	{
		printf("%02x ", *(unchar + counter));
	}
	printf("%02x\n", *(unchar + counter));
}

/**
 * class - Gives ELF class
 * @unchar: ELF param
 * return: void
 */
void class(unsigned char *unchar)
{
	printf("  Class:                             ");
	if (unchar[EI_CLASS] == ELFCLASSNONE)
	{
		printf("This class is invalid\n");
	}
	else if (unchar[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (unchar[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
		printf("<unknown: %x>\n", unchar[EI_CLASS]);
}

/**
 * data - Gives the data type
 * @unchar: ELF param
 * return: void
 */
void data(unsigned char *unchar)
{
	printf("  Data:                              ");
	if (unchar[EI_DATA] == ELFDATANONE)
	{
		printf("Unknown data format\n");
	}
	else if (unchar[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (unchar[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
		printf("<unknown: %x>\n", unchar[EI_DATA]);
}

/**
 * version - Gives version
 * @unchar: ELF param
 * return: void
 */
void version(unsigned char *unchar)
{
	printf("  Version:                           ");
	if (unchar[EI_VERSION] == EV_CURRENT)
	{
		printf("%i (current)\n", EV_CURRENT);
	}
	else
		printf("%i\n", unchar[EI_VERSION]);
}

/**
 * osorabi - Gives the OS/ABI
 * @unchar: ELF param
 * return: void
 */
void osorabi(unsigned char *unchar)
{
	printf("  OS/ABI:                            ");

	if (unchar[EI_OSABI] == ELFOSABI_SYSV)
	{
		printf("UNIX - System V\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_FREEBSD)
	{
		printf("UNIX - FreeBSD\n");
	}
        else if (unchar[EI_OSABI] == ELFOSABI_TRU64)
	{
		printf("UNIX - TRU64\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_SOLARIS)
	{
		printf("UNIX - Solaris\n");
	}
        else if (unchar[EI_OSABI] == ELFOSABI_IRIX)
	{
		printf("UNIX - IRIX\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_LINUX)
        {
                printf("UNIX - Linux\n");
        }
	else if (unchar[EI_OSABI] == ELFOSABI_HPUX)
	{
		printf("UNIX - HP-UX\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_STANDALONE)
	{
		printf("Standalone App\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_NETBSD)
	{
		printf("UNIX - NetBSD\n");
	}
	else if (unchar[EI_OSABI] == ELFOSABI_ARM)
	{
		printf("ARM\n");
	}
	else
		printf("<unknown: %x>\n", unchar[EI_OSABI]);
}

/**
 * thetype - Gives the type
 * @untype: given data
 * @unchar: ELF param
 * return: void
 */
void type(unsigned int untype, unsigned char *unchar)
{
	unchar[EI_DATA] == ELFDATA2MSB ? untype = untype >> 8 : untype;

	printf("  Type:                              ");

	if (untype == ET_NONE)
	{
		printf("NONE (Unknown type)\n");
	}
	else if (untype == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (untype == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (untype == ET_CORE)
        {
                printf("CORE (Core file)\n");
        }
	else if (untype == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else
		printf("<unknown: %x>\n", untype);
}

/**
 * entry - print the entry point
 * @unchar: ELF param
 * @unentry: data param
 * return: void
 */
void entry(unsigned int unentry, unsigned char *unchar)
{
	if (unchar[EI_DATA] == ELFDATA2MSB)
	{
		unentry = REV(unentry);
	}

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)unentry);
}

/**
 * main - read a ELF file.
 * @argc: the number of args
 * @argv: the Args
 * Return: an interger 0
 */
int main(int argc, char *argv[])
{
	int size, successread, successclose;
	Elf64_Ehdr *file;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
	}

	file = malloc(sizeof(Elf64_Ehdr));

	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	}
	size = open(*(argv + 1), O_RDONLY);

	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}

	successread = read(size, file, sizeof(Elf64_Ehdr));

	if (successread == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	checker(file->e_ident);
	magic(file->e_ident);
	class(file->e_ident);
	data(file->e_ident);
	version(file->e_ident);
	osorabi(file->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", file->e_ident[EI_ABIVERSION]);
	type(file->e_type, file->e_ident);
	entry(file->e_entry, file->e_ident);
	free(file);
	successclose = close(size);

	if (successclose)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file\n");
		exit(98);
	}
	return (0);
}
