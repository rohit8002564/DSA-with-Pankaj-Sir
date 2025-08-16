// storng number

#include <stdio.h>

int main()
{
    int n,rem,original,prod;
    printf("Enter a number:");
    scanf("%d", &n);
    
    original= n;
    // print the copied value
    printf("Original value stored is: %d\n", original);
    
    int  sum = 0;
   while(n!=0){
       rem = n%10;
       
       prod = 1;
       for(int i = 1; i<=rem; i++){
           prod=prod*i;
       }
       
       // sum of the factorial
       sum = sum + prod;
       n = n/10;
   }
    if(sum == original)
    printf("%d is strong number. \n", original);
    else
    printf("%d is not strong number. \n", original);
   
    return 0;
}
