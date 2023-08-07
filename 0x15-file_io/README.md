0x15-file_io

Learning Objectives:

    • Look for the right source of information online
    • How to create, open, close, read and write files
    • What are file descriptors
    • What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
    • How to use the I/O system calls open, close, read and write
    • What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
    • What are file permissions, and how to set them when creating a file with the open system call
    • What is a system call
    • What is the difference between a function and a system call


Files:

    • 0-read_textfile.c:  a function that reads a text file and prints it to the POSIX standard output.
    • 1-create_file.c:  a function that creates a file.
    • 2-append_text_to_file.c:  a function that appends text at the end of a file.
    • 3-cp.c: a program that copies the content of a file to another file.
    • 100-elf_header.c:  a program that displays the information contained in the ELF header at the start of an ELF file.
      Usage: elf_header elf_filename
      Displayed information: (no less, no more, do not include trailing whitespace)
        ◦ Magic
        ◦ Class
        ◦ Data
        ◦ Version
        ◦ OS/ABI
        ◦ ABI Version
        ◦ Type
        ◦ Entry point address
          Format: the same as readelf -h (version 2.26.1)
