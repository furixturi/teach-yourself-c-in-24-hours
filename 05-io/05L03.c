/* 05L03.c: format decimal width and float precision */
#include <stdio.h>

int main()
{
    // integers - min width
    // %8d minimum 8 digits wide, right aligned
    // %-8d minimum 8 digits wide, left aligned
    // %08d minimum 8 digits wide, right aligned with 0 padding at the left (%-08d will ignore 0 padding since it changes the number)
    printf("%8d %c %-8d%c\n", 1, 'a', 1, 'b');
    printf("%8d %c %-8d%c\n", 12, 'a', 12, 'b');
    printf("%08d %c %-8d%c\n", 12, 'a', 12, 'b');

    // integers - precesion
    // %.8d:
    // with positive integers: same as %08d
    // with negative integers: still keeps 8 digit precision while %08d will use one digit for the negative sign
    printf("%08d %.8d\n", 12, 12);
    printf("%08d %.8d\n", -12, -12); //-0000012 -00000012
    printf("%.3d\n", 123456);

    // floats - precision
    // %8.2f: minimum width (including the decimal point and fraction part) 8 right aligned, precision 2 digits (rounded)
    // %08.2f: minimum width (including the decimal point and fraction part) 8 right aligned padding with 0 on the left, precision 2 digits (rounded)
    // %-8.2f: minimum width 8, left aligned, precision 2 digits 
    printf("%8.2f %08.2f %-8.2f\n", 123.456, 123.456, 123.456); //  123.46 000123.46 123.46

    return 0;
}