
#include <stdio.h>

void toBinary(int x);

int main(void) {
    int x = 2;
    long y = 2;

    printf("\nNote: x << 2 is equivalent to multiplying x by 4.\n");

    printf("LEFT SHIFT EXAMPLES:\n");
    printf("2 << 2 = %d\n", x << 2);
    printf("2 << 3 = %d\n", x << 3);
    printf("2 << 4 = %d\n", x << 4);
    printf("\n");
    x = 3;
    printf("3 << 2 = %d\n", x << 2);
    printf("3 << 3 = %d\n", x << 3);
    printf("3 << 4 = %d\n", x << 4);
    printf("\n");

    printf ("Size of int: %zu\n", sizeof(x));
    printf("Size of long: %zu\n", sizeof(y));
    printf("\n");

    printf("x = 4\n");
    x = 4;
    toBinary(x);

    printf("\nx << 2:\n");
    toBinary(x << 2);

    printf("\nx >> 2:\n");
    toBinary(x >> 2);

    printf("\nx & 0:\n");
    toBinary(x & 0);

    printf("\n~(x & 0):\n");
    toBinary(~(x & 0));

    printf("\nx | 3:\n");
    toBinary(x | 3);

    return 0;
}

/*
 * Takes an integer and prints the binary bits of how it is stored in memory.
 * Primarily used to show the results of bitwise operations.
 */
void toBinary(int x) {
    printf("%d in memory:\t", x);
    unsigned int num_bytes = sizeof(x); // Number of bytes
    short bits = 8; // Number of bit per byte
    char* num = &x; // Get pointer to first byte of int (Note must be char)
    unsigned char bit; // Will hold 1 or 0
    
    for (int i = 0; i < num_bytes; i++) {
        for (int j = bits; j > 0; j--) {
            // Right shift current byte to get current bit in rightmost position
            // and check if it is a 1. Note j-1 for max of 7 shifts.
            bit = (num[i] >> (j-1)) & 1;
            printf("%u ", bit);
        }
        if (i < num_bytes-1)
            printf(" | "); // Segment bytes
    }

    printf("\n");
}

/* NOTES
 * 
 * 8 bits = 1 byte
 *
 * Integer is 4 bytes
 * [00000000 | 00000000 | 00000000 | 00000000]
 * 
 */