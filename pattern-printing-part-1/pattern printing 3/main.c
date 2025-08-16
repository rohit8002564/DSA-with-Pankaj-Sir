/*

****
 ***
  **
   *
*/

#include <stdio.h>

int main()
{
    int row, col;
    for(row = 1; row<=4; row++){
        for(int space = 1; space<row; space++){
            
            printf(" ");
        }
            for(int star = 1; star<=4-row+1; star++){
                printf("*");
            }
       
        printf("\n");
    }
    

    return 0;
}