//Perfect Number?
//A number is called a Perfect Number if the sum of its proper divisors (excluding the number itself) is equal to the number.

#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter a number:\n");
    scanf("%d", &n);
    
   sum = 0;
   for(int i = 1; i<=n/2; i++){
       if(n%i==0){
           sum+= i;
       }
   }
   
   // 
   if(sum == n)
   printf("%d is Perfect number", n);
   else
   printf("%d is Not Perfect number", n);
   
    return 0;
}
