/* 05L01: read write to std io */
#include <stdio.h>

int main()
{
    // read
    // getc(stdin) is the same as getchar()
    // both read one character from the stdin
    // they read together after user hits enter
    int ch1, ch2;

    printf("Type two chararacters and hit enter (we won't take the rest if you type more than two): \n");
    ch1 = getc(stdin);
    ch2 = getchar();
    printf("You typed: %c and %c\n", ch1, ch2);

    // write
    // putc(int, stdout) is the same as putchar(int)
    // \n is 10
    printf("Now we are writing to the standard output:\n");
    putc('A', stdout);
    putchar(10);
    putchar(66);
    putchar(10);

    return 0;
}