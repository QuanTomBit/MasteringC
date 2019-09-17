
#include <stdio.h>

int main() {

    printf("FORMAT SPECIFIERS FOR PRINTF");

    // char
    printf("char %%c: %c\n", 'T');

    // int 
    printf("int %%d: %d\n", 21);
    printf("int %%i: %i\n", 15);
    printf("unsigned int %%u: %u\n", 16);

    // short
    printf("short %%hi: %hi\n", (short) 14);
    printf("unsigned short %%hu: %hu\n", (unsigned short) 13);

    // long
    printf("long %%ld: %ld\n", (long) 17);
    printf("long %%li: %li\n", (long) 18);
    printf("unsigned long %%lu: %lu\n", (unsigned long) 18);
    printf("long long %%lli: %lli\n", (long long) 212121);
    printf("long long %%lld: %lld\n", (long long) 212122);
    printf("unsigned long long %%llu: %llu\n", (unsigned long long) 212123);

    // decimals
    float flt = 3.14;
    printf("float %%f: %f\n", flt);
    printf("float %%e: %e\n", flt + 0.001);
    printf("float %%E: %E\n", flt + 0.0015);

    double dbl = 3.14159;
    printf("double %%f: %f\n", dbl);
    printf("double %%lf: %lf\n", 2.718);
    printf("double %%e: %e\n", dbl + 0.000002);
    printf("double %%E: %E\n", dbl + 0.0000026);
    printf("double %%g: %g\n", dbl + 0.00000265);
    printf("double %%G: %G\n", dbl + 0.000002653);

    printf("long double %%Lf: %Lf\n", (long double) 3.1415926535);

    // octal
    printf("octal %%o: %o (decimal 15)\n", (int)15);
    printf("octal %%O: %O (decimal 16)\n", (int)16);

    // hexadecimal
    printf("hexadecimal %%x: %x (decimal 15)\n", (int)15);
    printf("hexadecimal %%X: %X (decimal 16)\n", (int)16);

    // string
    printf("string %%s: %s\n", "Hello!");

    // sizeof() size_t
    int foo;
    printf("sizeof() size_t %%zu: %zu\n", sizeof(foo));

    // nothing
    int x = 21;
    int* y = &x;
    printf("int * but prints nothing %%n: _%n_\n", y);

    /*
        In C language, %n is a special format specifier. It cause printf() to load 
        the variable pointed by corresponding argument. The loading is done with a 
        value which is equal to the number of characters printed by printf() before 
        the occurrence of %n.

        (From TutorialsPoint - What is the use of %n in printf())
    */

   printf("print 1 as 4 characters wide: %4d\n", 1);
   printf("print two characters after the decimal point: %.2f\n", 43.33333333);
   printf("print 4 wide and 3 decimal places: %4.2f\n", 44.555555);
    return 0;
}