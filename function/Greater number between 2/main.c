//Greater number between 2

#include <stdio.h>
// function definition
int Greater(int x, int y){
   /* if(x>y)
    return x;
    else
    return y;*/
    // Ternary operator
    return (x>y) ? x:y;
}

int main()
{
    int a = 50, b = 110, result;
    result = Greater(a, b); // function call
    printf("Greater number is: %d", result);
    return 0;
}
