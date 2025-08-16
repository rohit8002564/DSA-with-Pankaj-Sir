/*
1       A
23      BC
456     DEG
78910 ||GHIJ

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the vlue of n:-");
    scanf("%d", &n);
    
    char ch = 'A';
    
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=row; col++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}