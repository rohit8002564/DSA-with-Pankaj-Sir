/*
If number is negative, return -number; else return number.

solve this step by step using:

A function

A ternary operator

Concept of absolute value

Goal:
Create a function that takes an integer and returns its absolute value.

Logic:
If the number is negative, absolute value = -number

If it's positive or zero, absolute value = number

*/
#include <stdio.h>

int absolute(int x){
    return (x<0) ? -x : x;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int result = absolute(num);
    printf("Absolute value is %d\n", result);

    return 0;
}
