/*

A 
BB
CCC
DDDD
*/
#include <stdio.h>

int main()
{
/*char ch = 'A';
for(int row = 1; row<=4; row++){
    for(int col = 1; col<=row; col++)
    printf("%c", ch);
   ch=ch+1;
    printf("\n");
}*/
int n;
printf("Enter the number of row:-");
scanf("%d", &n);

for(int row = 1; row<=n; row++){
    for(int col = 1; col<=row; col++)
    printf("%c", 'A'+row-1);
    printf("\n");
}

    return 0;
}
