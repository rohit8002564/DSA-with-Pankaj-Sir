//the product of 3 raised to the power n 

#include <stdio.h>

int main()
{
    int n,  prod, i;
    printf("Enter the value of n:-");
   scanf("%d", &n);
    
    prod = 1; 
    for(i = 1; i<=n; i++)
    prod= prod * 3;
    
    printf("the value of 3^%d is: %d\n", n, prod);

    return 0;
}
