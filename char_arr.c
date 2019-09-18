
#include <stdio.h>

#define LINE_LENGTH 20

void addSmile(char greeting[]);

/*
    A character array generally ends with '\0'. This convention is what %s uses in printf to find the end of the string.
    It is possible to have a character array similar to the following:
        ['H', 'e', 'y', '\0', ',', ' ', 'L', 'a', 'u', 'r', 'a', '!', '\0']
    This is an issue because only "Hey" will be printed.
*/

int main() {
    char greet1[LINE_LENGTH] = "Hello, Thomas!\0";
    char greet2[LINE_LENGTH] = {'H', 'e', 'y', ',', ' ', 'L', 'a', 'u', 'r', 'a', '!', '\0'};

    addSmile(greet1);
    addSmile(greet2);

    printf("%s\n%s\n", greet1, greet2);

    return 0;
}

void addSmile(char greeting[]) {
    char curr;
    int i = -1;

    while (i < LINE_LENGTH && (curr = greeting[++i]) != '\0')
        ; // Null statement

    // Checknot going out of bounds; Need room for ":)\0"
    if (i < LINE_LENGTH  - 2) {
        greeting[i++] = ':';
        greeting[i++] = ')';
        greeting[i] = '\0';
    }
}