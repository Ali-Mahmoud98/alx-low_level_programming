# TASKS
## 0. Preprocessor
- script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

## 1. Compiler
- script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is main.c, the output file should be main.o

## 2. Assembler
- script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

## 3. Name
- script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

## 4. Hello, puts
- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

## 5. Hello, printf
- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

## 6. Size is not grandeur, and territory does not make a nation
- Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
- The -m32 and -m64 flags are used to specify the architecture of the target machine for 32-bit and 64-bit systems, respectively.

### Example
```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 

```

# Optional tasks

### 100. Intel
- script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

