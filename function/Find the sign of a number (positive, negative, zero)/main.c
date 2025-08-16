// Use ternary to return 1 (positive), -1 (negative), or 0 (zero)

#include <stdio.h>

// Function using ternary to return sign of number
int sign(int num) {
    return (num > 0) ? 1 : (num < 0) ? -1 : 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sign(n);

    if(result == 1)
        printf("The number is positive.\n");
    else if(result == -1)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    return 0;
}
