//
#include <stdio.h>

int main() {
    int a, b;

    // Get the start and end of the table range from the user
    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    // Validate the input
    if (a > b) {
        printf("Invalid range! 'a' should be less than or equal to 'b'.\n");
        return 1;
    }

    // Print multiplication tables from a to b
    for (int i = a; i <= b; i++) {
        printf("\nMultiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
