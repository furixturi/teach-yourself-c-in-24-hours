/* I am a comment */
// I am also a comment...well, only if I'm lucky since this is not ANSI approved comment style
/* 02L01.c: This is my first C program (嘘) */

/* 
The #include directive:
- A preprocessor directive. It tells the C preprocessor to look for a file (called a header file) and place the contents of that file here.
- The angle brackets <> tells the preprocessor to look for the header file somewhere else than the current directory.
- If the header file is in current directory or its subdirectories, use double quote "".
*/
#include <stdio.h>

/* 
The main function: 
- The entrance and the exit point of every C program.
- It returns an integer by default. Returning 0 means the program is terminated normally, returning any other integer means an error has occurred - the bigger the integer, the more severe the error.
*/
int main()
{
    printf("Howdy, neighbor! This is my first C program なんでね〜\n");
    return 0;
}