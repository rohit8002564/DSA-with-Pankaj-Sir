// Q.4. Armstrong between 1 to 1000
#include <stdio.h>

int main()
{
    int n, rem, sum, original;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for(n = 1; n <= 1000; n++) {
        original = n;
        sum = 0;

        int temp = n;
        while(temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem; // cube of digit
            temp = temp / 10;
        }

        if(sum == original) {
            printf("%d\n", original);
        }
    }

    return 0;
}
