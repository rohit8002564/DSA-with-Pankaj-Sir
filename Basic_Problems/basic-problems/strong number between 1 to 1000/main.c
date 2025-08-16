#include<stdio.h>

int main(){
    int temp, original, sum, rem, prod;

    printf("Strong numbers between 1 to 1000 are: \n");

    for(int n = 1; n <= 1000; n++) {  //
        original = n;
        temp = n;
        sum = 0;

        while(temp != 0){
            rem = temp % 10;

            // calculate factorial 
            prod = 1;
            for(int i = 1; i <= rem; i++){
                prod = prod * i;
            }

            sum = sum + prod;
            temp = temp / 10;
        }

        if(sum == original){
            printf("%d\n", original);
        }
    }

    return 0;
}


