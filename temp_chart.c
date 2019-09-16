
#include <stdio.h>
#include <limits.h>

// Prints the Fahrenheit-Celsius table for F = 0, 20, ..., 300

int main() {
    int f, c;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("ARITHMETIC WITH FLOATS\n\n");
    printf("3 / 2.0 = %.1f\n", 3 / 2.0);
    printf("3.0 / 2 = %.1f\n", 3.0 / 2);
    printf("3 / 2 = %d\n", 3 / 2);

    printf("\n");
    printf("INTEGER ARITHMETIC\n\n");
    f = lower;
    while (f <= upper) {
        c = 5 * (f - 32) / 9;
        printf("%d\t%d\n", f, c);

        f += step;
    }

    printf("\n");
    printf("FLOATING POINT ARITHMETIC\n\n");
    float far, cel;
    far = lower;
    while (far <= upper) {
        cel = 5 * (far - 32) / 9;
        printf("%.2f\t%.2f\n", far, cel);

        far += step;
    }

    return 0;
}