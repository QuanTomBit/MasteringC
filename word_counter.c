
#include <stdio.h>

int main() {
    int c, prev;
    long wordCount;
    prev = NULL;
    wordCount = 0;

    while ((c = getchar()) != EOF) {
        // If c is a whitespace and previous was not whitespace or beginning of a file, then new word is counted.
        if ((c == ' ' || c == '\n' || c == '\t') && !(prev == NULL || prev == ' ' || prev == '\n' || prev == '\t')) {
            wordCount++;
        }
        prev = c;
    }

    // Check if a word was typed before EOF
    if (!(prev == NULL || prev == ' ' || prev == '\n' || prev == '\t')) {
        wordCount++;
    }

    printf("\nWord Count: %ld\n", wordCount);

    return 0;
}