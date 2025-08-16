//Sum of First n Natural Numbers
#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("Enter the number of n:- ");
    scanf("%d", &n);
    
    sum = 0;
    for(i = 1; i<=n; i++)
    sum= sum + i;
    printf("The sum of %d is: %d\n", n, sum);

    return 0;
}