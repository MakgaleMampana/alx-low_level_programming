#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 128

int _putchar(char c);

int main(int argc, char *argv[])
{
    int fd;
    char buf[BUF_SIZE];
    ssize_t nread;
    unsigned char ident[16];
    unsigned char class, data, version, osabi, abiversion, type;
    unsigned long long entry;

    if (argc != 2) {
        write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        write(STDERR_FILENO, "Error: Cannot open file\n", 24);
        exit(98);
    }

    nread = read(fd, ident, sizeof(ident));
    if (nread != sizeof(ident)) {
        write(STDERR_FILENO, "Error: Cannot read ELF header\n", 30);
        exit(98);
    }

    class = ident[4];
    data = ident[5];
    version = ident[6];
    osabi = ident[7];
    abiversion = ident[8];
    type = ident[16];

    if (ident[0] != 0x7f || ident[1] != 'E' || ident[2] != 'L' || ident[3] != 'F') {
        write(STDERR_FILENO, "Error: Not an ELF file\n", 22);
        exit(98);
    }

    if (class == 1) {
        _putchar('Class: ELF32\n');
    } else if (class == 2) {
        _putchar('Class: ELF64\n');
    } else {
        _putchar('Class: Invalid ELF class\n');
        exit(98);
    }

    if (data == 1) {
        _putchar('Data: Little Endian\n');
    } else if (data == 2) {
        _putchar('Data: Big Endian\n');
    } else {
        _putchar('Data: Invalid data encoding\n');
        exit(98);
    }

    _putchar('Version: ');
    _putchar(version + '0');
    _putchar('\n');

    _putchar('OS/ABI: ');
    switch (osabi) {
        case 0: _putchar("UNIX System V\n"); break;
        case 3: _putchar("Linux\n"); break;
        default: _putchar("Other\n"); break;
    }

    _putchar('ABI Version: ');
    _putchar(abiversion + '0');
    _putchar('\n');

    _putchar('Type: ');
    switch (type) {
        case 1: _putchar("Relocatable\n"); break;
        case 2: _putchar("Executable\n"); break;
        case 3: _putchar("Shared object\n"); break;
        case 4: _putchar("Core file\n"); break;
        default: _putchar("Other\n"); break;
    }

    nread = lseek(fd, 0x18, SEEK_SET);
    if (nread == -1) {
        write(STDERR_FILENO, "Error: Cannot seek to entry point address\n", 43);
        exit(98);
    }

    nread = read(fd, buf, sizeof(entry));
    if (nread != sizeof(entry)) {
        write(STDERR_FILENO, "Error: Cannot read entry point address\n

