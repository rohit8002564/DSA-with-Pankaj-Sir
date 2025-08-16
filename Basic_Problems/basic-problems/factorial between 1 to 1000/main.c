// print factorial of numbers from 1 to 1000.
#include<stdio.h>
int main(){
    long long fact = 1;
    
    printf("factorial between 1 to 1000:\n");
    
    for(int i = 1; i<=1000; i++){
        fact = fact*i;
        printf("%d! = %llu\n", i, fact);
    }
    return 0;
}
/*Problem: Data Type Overflow
The value of factorial grows extremely fast.

Even 20! = 2,432,902,008,176,640,000 — which is too big for even unsigned long long.

So for i > 20, fact overflows and prints garbage or negative values.*/