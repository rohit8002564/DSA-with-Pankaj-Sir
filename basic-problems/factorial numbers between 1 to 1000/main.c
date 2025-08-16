#include <stdio.h>

int main() {
    unsigned long long fact = 1;
    int i = 1;

    printf("Numbers between 1 and 1000 that are factorials:\n");

    while(fact <= 1000) {
        printf("%llu = %d!\n", fact, i);
        i++;
        fact = fact * i;
    }

    return 0;
}
