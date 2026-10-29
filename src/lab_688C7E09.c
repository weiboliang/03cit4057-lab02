#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char: min = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: max = %u\n", UCHAR_MAX);

    printf("short: min = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: max = %u\n", USHRT_MAX);

    printf("int: min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: max = %u\n", UINT_MAX);

    printf("long: min = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: max = %lu\n", ULONG_MAX);

    return 0;
}
