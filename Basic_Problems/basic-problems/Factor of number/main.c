//WAP to print factors of a no. n (n>0)
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    
    printf("Factors of %d are: ", n);
    for(int i = 1; i<=n; i++){
        if(n%i == 0)
        printf(" %d",  i);
    }
printf("\n");
    return 0;
}

