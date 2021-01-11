/* 09L01.c: data type modifiers: unsigned, short, long */
#include <stdio.h>
#include <limits.h>

int main()
{

    printf("int size is %lu bytes. %d ~ %d.\n", sizeof(int), INT_MIN, INT_MAX); // 4 bytes => 32 bits => 0xFFFFFFFF
    printf("unsingned int size is %lu bytes. 0 ~ %u.\n\n", sizeof(unsigned int), UINT_MAX); // %u to print unsigned integer, otherwise it becomes -1
    printf("short int size is %lu bytes. %d ~ %d.\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short int size is %lu bytes. 0 ~ %d.\n\n", sizeof(unsigned short int), USHRT_MAX);
    printf("long int size is %lu bytes. %ld ~ %ld.\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int size is %lu bytes. 0 ~ %lu.\n\n", sizeof(unsigned long int), ULONG_MAX);
    printf("long long int size is %lu bytes. %lld ~ %lld.\n", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int size is %lu bytes. 0 ~ %llu.\n", sizeof(unsigned long long int), ULLONG_MAX);

    // U or u suffix marks an integer to be unsigned
    // L or l suffix marks an integer to be long
    // limits.h:
    // #define ULONG_MAX (__LONG_MAX__ *2UL+1UL)

    return 0;
}