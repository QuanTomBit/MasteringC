
#include <stdio.h>
#include <limits.h>

/*
    NOTE:
        The sizes vary based on what system is being used. Therefore, the min and max values
        also vary.
*/

int main() {
    int sint;
    unsigned int uint;
    short sh;
    unsigned short ush;
    long lg;
    unsigned long ulg;
    long long llg;
    unsigned long long ullg;

    float flt;
    double dbl;
    long double ldbl;

    char ch;
    unsigned char uch;

    printf("SIZES\n");

    printf("int: %zu\nu int: %zu\nshort: %zu\nu short: %zu\nlong: %zu\nu long: %zu\nlong long: %zu\nu long long: %zu\n", 
            sizeof(sint), sizeof(uint), sizeof(sh), sizeof(ush), sizeof(lg), sizeof(ulg), sizeof(llg), sizeof(ullg));

    printf("float: %zu\ndouble: %zu\nlong double: %zu\n", sizeof(flt), sizeof(dbl), sizeof(ldbl));

    printf("char: %zu\nu char: %zu\n", sizeof(ch), sizeof(uch));

    printf("MAXIMUMS\n");
    printf("int: %d\n", INT_MAX);
    printf("unsigned int: %u\n", UINT_MAX);
    printf("short: %hi\n", SHRT_MAX);
    
    printf("long long: %lli\n", LLONG_MAX);
    printf("unsigned long long: %llu\n", ULLONG_MAX);

    return 0;
}