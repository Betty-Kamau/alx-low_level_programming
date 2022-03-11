1. The file 0-preprocessor has a script that runs a C file through the preprocessor and save the result into another file
2. The file 1-compiler has a script that compiles a C file but does not link.

	* The C file name will be saved in the variable $CFILE
	* The output file should be named the same as the C file, but with the extension .o instead of .c.
	* Example: if the C file is main.c, the output file should be main.o
3. The file 2-assembler has a script that generates the assembly code of a C code and save it in an output file.

	* The C file name will be saved in the variable $CFILE
	* The output file should be named the same as the C file, but with the extension .s instead of .c.
	* Example: if the C file is main.c, the output file should be main.s
4. The file 3-name has script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE
5. The file 4-puts.c has a script that will write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
6. The file 5-printf.c writes a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
7. The file 6-size.c has a script that writes Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option 	
