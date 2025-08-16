// Function to find maximum of two numbers
#include <stdio.h>
//Function Definition
 int max(int x, int y){
     /*if(x>y)
     return x;
     else
     return y;*/
     return(x>y)?x:y;
 }

int main()
{
    int a, b, result;
    printf("Enter the number a and b:-");
    scanf("%d %d", &a, &b);
    
    result = max(a, b); // Function call
    printf("%d ", result);

    return 0;
}
