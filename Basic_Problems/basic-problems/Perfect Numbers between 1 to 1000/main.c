//Perfect Numbers between 1 to 1000:
#include <stdio.h>

int main()
{
    int n, sum;
    printf("Perfect Numbers between 1 to 1000:\n");
   for(n = 1; n<=1000; n++){
       sum = 0;
       
       for(int i = 1; i<n; i++){
           if(n%i == 0)
           {
               sum = sum+i;
           }
       }
       
       if(sum == n){
           printf("%d\n",n);
       }
   }

    return 0;
}