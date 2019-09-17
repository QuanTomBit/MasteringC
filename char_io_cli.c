
#include <stdio.h>

int main() {
    int c; // The variable c must be big enough to hold anyhting that getchar() returns

    /*
        Note: Since getchar() reads the _next_ input character, nothing is read until the user hits enter.
        That's why a character isn't printed everytime one is typed.
    */
    while ((c = getchar()) != EOF) { // Note that != has greater precedence than =
        putchar(c);
    }

    printf("\nThe value of EOF is %d\n", EOF); // EOF == -1

    return 0;
}