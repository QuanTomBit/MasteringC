
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // Or declare variable beforehand

    int i = 5;

    for (; i > 0; i--) { // Could also put for (i; i >0; i--) { ... } but i is unused
        printf("%d ", i);
    }

    printf("\n");

    /*
     * Infinite For-Loop:
     * 
     * for (;;) {}
     */

    char isLooping = 1;
    int j = 4;
    while (isLooping) {
        printf("Looping... ");

        if (--j == 0)
            isLooping = 0;
    }

    printf("\n");

    /*
     * Infinite While-Loop:
     * 
     * while (1) {}
     */

    int k = -5;
    do {
        printf("%d ", k);
    } while (++k < 0);

    printf("\n");

    return 0;
}