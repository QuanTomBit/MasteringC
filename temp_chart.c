
#include <stdio.h>
#include <limits.h>

// Prints the Fahrenheit-Celsius table for F = 0, 20, ..., 300

int main() {
    int f, c;
    int lower = 0;
    int upper = 300;
    int step = 20;

    f = lower;
    while (f <= upper) {
        c = 5 * (f - 32) / 9;
        printf("%d\t%d\n", f, c);

        f += step;
    }

    printf("%zu\n", sizeof(f));
    printf("%d\n", INT_MAX);
}