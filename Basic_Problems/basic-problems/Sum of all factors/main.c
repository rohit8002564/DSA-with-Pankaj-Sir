// wap to print sum of all factors of a given no. n (n>0)
#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    sum = 0;
    printf("The factor of %d", n);
    for(i = 1; i<=n; i++){
    if(n%i == 0)
    {
        printf("%d", i); // Display all factor of i
        sum = sum + i; // Add to sum
    }
}
   printf("\n");
   //printf("%d", sum);
    printf("\nSum of factors = %d\n", sum);
    return 0;
}
