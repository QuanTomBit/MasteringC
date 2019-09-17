
#include <stdio.h>

int sumOfThree(int n, int m, int l);

int main() {
    printf("SUM: %d\n", sumOfThree(1, 2, 3));
}

int sumOfThree(int n, int m, int l) {
    int sum = n + m + l;
    
    return sum;
}