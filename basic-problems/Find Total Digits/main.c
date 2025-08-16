/*Take a integer (n>0), find the number of digits in the number
i/p: n = 425 o/p:3 
i/p: n = 87565 o/p:5 */

#include<stdio.h>
int main(){
    int n, count;
    
    printf("Enter the number of n: ");
    scanf("%d",&n);
    
    count= 0;
    while(n!=0){
        count++;
        n = n/10;
    }
    
    printf("The number of digits are: %d", count);
    return 0;
}