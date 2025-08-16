/*handles 0 or negative numbers

n = 0 (should return 1 digit)
negative numbers (ignores the minus sign)*/

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // If number is 0, it has 1 digit
    if (n == 0) {
        count = 1;
    } else {
        // If number is negative, make it positive
        if (n < 0) {
            n = -n;
        }

        // Count digits
        while (n != 0) {
            count++;
            n = n / 10;
        }
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
