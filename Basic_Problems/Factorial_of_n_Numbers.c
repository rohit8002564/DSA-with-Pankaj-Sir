// Factorial of a Number ||Product of First n Natural Numbers

#include<stdio.h>
int main(){
  /*int n, prod, i; here if user want fac of 20 the give program overflows and shows a garbage or negative value.
so solution is : unsigned long logn because it larger value|| 32 bit */
int n, i;
long long prod;

    printf("Enter the value fo n: ");
    scanf("%lld", &n);
    
    prod = 1;
    for(i = 1; i<= n; i++)
    prod = prod*i;
    
    printf("The Factorial of  %d is: %lld\n", n, prod);
    return 0;
}
