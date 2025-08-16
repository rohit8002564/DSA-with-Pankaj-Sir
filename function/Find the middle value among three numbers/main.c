// Not smallest, not largest — the one in the middle. Trickier with ternary!

#include <stdio.h>
int middle(int x, int y, int z){
    return ((x>=y && x<=z) || (x<=y && x>=z) ? x:
           (y>=x && y<=z) || (y<=x && y>=z)) ? y: z;
}
int main()
{
    int a, b, c, result;
    printf("Enter the value of a, b and c:");
    scanf("%d %d %d", &a, &b, &c);
    
    //result = middle(a, b, c);
    printf("The middle value is: %d\n", middle(a, b, c));

    return 0;
}
