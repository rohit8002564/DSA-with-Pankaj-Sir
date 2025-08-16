#include <stdio.h>

int main() {
    int i, j;

    // Print column headers
    printf("     ");
    for (i = 1; i <= 100; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Print separator line
    printf("     ");
    for (i = 1; i <= 100; i++) {
        printf("----");
    }
    printf("\n");

    // Print multiplication table
    for (i = 1; i <= 100; i++) {
        printf("%4d|", i);  // Row header
        for (j = 1; j <= 100; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
