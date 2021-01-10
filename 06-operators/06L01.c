/* 06L01.c: pre-increment and post-increment */
#include <stdio.h>

int main()
{
    int x, y;
    x = 1;
    y = x++;
    printf("x: %d, y: %d\n", x, y); // x: 2, y: 1
    y = ++x;
    printf("x: %d, y: %d\n", x, y); // x: 3, y: 3
    return 0;
}