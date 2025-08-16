// Use ternary operator inside a function to return 1 for even, 0 for odd.

#include <stdio.h>
int Even_Odd(int x){
   
  /*  if(x % 2 == 0)
    return 1;
    else
    return 0;*/
    return (x % 2 == 0) ? 1: 0;
}
int main()
{
    int num, result;
    printf("Enter a number:-");
    scanf("%d", &num);
    result = Even_Odd(num);
    
    if(result==1)
    printf("Number is  even %d", result);
    else
    printf("Number is odd %d", result);

    return 0;
}
