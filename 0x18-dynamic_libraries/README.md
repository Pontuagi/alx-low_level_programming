0x18-dynamic_libraries
Learning Objectives:
    • What is a dynamic library, how does it work, how to create one, and how to use it
    • What is the environment variable $LD_LIBRARY_PATH and how to use it
    • What are the differences between static and shared libraries
    • Basic usage nm, ldd, ldconfig


Files:
    • libdynamic.so - dynamic library containing all the *.c function in the directory
    • 1-create_dynamic_lib.sh - a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
    • main.h - header file
    • 100-operations.so -  a dynamic library that contains C functions that can be called from Python
    • 101-make_me_win.sh - I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot? Our mole got us a copy of the program, you can download it here(https://github.com/alx-tools/0x18.c).
