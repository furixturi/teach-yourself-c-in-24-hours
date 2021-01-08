/* 04L02: numbers */
#include <stdio.h>
#include <float.h> // FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX
#include <limits.h> // INT_MAX, INT_MIN


int main()
{
    // integer division truncates the result after the decimal point 
    printf("Deviding 1 by 2 is %d.\n", 1/2); // 0

    // if either operand is a floating point number, the result won't be truncated.
    // float has at least 6 digits of precision. 
    printf("Deviding 1 by 2.0 is %f.\n", 1/2.0f); // 0.500000
    printf("Deviding 1 by 2.0 is %f.\n", 1/2.0); // 0.500000
    printf("Adding 1 to 2.0 is %f.\n", 1+2.0); // 3.000000
    printf("Deviding 1 by 2.0 and printing the result using scientific notation is %e.\n", 1/2.0); // 5.000000e-01
    
    // scientific notation
    printf("Printing 1e2 as a normal float %f.\n", 1e2); // 100.000000

    // ranges
    printf("Min float: %f. Max float: %f.\n", FLT_MIN, FLT_MAX);
    printf("Min double: %f. Max double: %f.\n", DBL_MIN, DBL_MAX);
    printf("Min integer: %d. Max integer: %d. \n", INT_MAX, INT_MIN);
    return 0;
}