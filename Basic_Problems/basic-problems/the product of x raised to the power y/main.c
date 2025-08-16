//the product of x raised to the power y
#include <stdio.h>

int main()
{
    int x, y, prod;
    printf("Enter a base and power: ");
    scanf("%d %d", &x, &y); // x is a base , y is exponent
    
    prod = 1;
    for(int i = 1; i<=y; i++)
    prod = prod*x;
    
   // printf("the prod is %d", prod);
    printf("The product is %d ^ %d = %d\n",  x, y, prod);

    return 0;
}
