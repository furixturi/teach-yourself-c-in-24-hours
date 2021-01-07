/* 02L02.c */
/* The exit function is in stdlib.h */
#include <stdlib.h>
#include <stdio.h>

/* 
An alternative way to terminate: exit(0)
The argument indicates if the program terminated normally (0) or had error (>0).
Note: Compiler gives you a warning for not returning an integer in the main function but still allows you to do it. 
*/
void main()
{
    printf("I am gonna use exit(0) instead of return 0.\n");
    exit(0);
}