/* 03L01.c: an add integer function and calling it from main */

#include <stdio.h>

/* This function adds two integers and returns the result */
int add_integers(int x, int y)
{
    return x + y;
}

int main()
{
    // int sum;
    // sum = add_integers(5, 12);
    // printf("Adding 5 to 12 we get %d. \n", sum);

    printf("Adding 5 to 12 we get %d. \n", add_integers(5, 12));
    return 0;
}