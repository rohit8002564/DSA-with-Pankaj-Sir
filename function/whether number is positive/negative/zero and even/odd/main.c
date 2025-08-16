// Function to check and print whether number is positive/negative/zero and even/odd

#include <stdio.h>

void checkNumber(int x){
    if(x == 0)
    printf("number is zero\n");
    else
    printf("%d is %s and %s\n", x,
    
    (x>0) ? "positive" : "negative", // sign check using ternary
    
    (x % 2 == 0) ? "Even" : "Odd" // Even/odd check using ternary
    );
}
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d", &num);
    
    checkNumber(num);

    return 0;
}
