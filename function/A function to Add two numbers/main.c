#include <stdio.h>
int add(int, int); // forward declaration

int main() {
    int a = 10, b = 20, sum;
    sum = add(a, b); // function call
    printf("%d", sum);
    return 0; // optional but recommended
}

// function definition
int add(int x, int y) {
    int temp;
    temp = x + y;
    return temp;
}
