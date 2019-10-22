
#include <stdio.h>

int main(void) {
    short x = 2;
    
    switch (x) {
        case 0:
            printf("0\n");
            break;
        case 1: case 2: case 3: case 4: case 5:
            printf("<= 5\n");
        case 10:
            printf("No break before\n");
            break;
        default:
            printf("UNKNOWN\n");
            break;
    }

    return 0;
}