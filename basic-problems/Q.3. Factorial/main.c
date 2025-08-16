//3. Factorial
#include <stdio.h>

int main()
{
    int n, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++){
        prod=prod*i;
    }
printf("Factorial of %d is %d\n", n, prod);

    return 0;
}
