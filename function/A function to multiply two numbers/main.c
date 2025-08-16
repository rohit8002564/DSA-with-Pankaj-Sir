//A function to multiply two numbers.

#include <stdio.h>

//function definition
float mul(float x, float y){
    return  x*y;
}

int main(){
    float a, b, result;
    printf("Enter ther number of a and b:-");
    scanf("%f %f", &a, &b);
    
    result = mul(a, b);
    printf("The result of mul %.2f and %.2f is: %.2f\n", a, b, result);
    return 0;
}