// Return 1 if vowel, else 0. (Use OR `||` inside ternary)

#include <stdio.h>
int isVowel(char ch){
    return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ,
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 1:0; 
}
int main()
{
    char c;
    printf("Enter a Charactr:-");
    scanf(" %c", &c); // Notice the space before %c to skip newline

    
    if(isVowel(c))
    printf(" '%c' is vowel \n", c); 

    else
    printf(" '%c' is not a vowel .\n", c);

    return 0;
}
