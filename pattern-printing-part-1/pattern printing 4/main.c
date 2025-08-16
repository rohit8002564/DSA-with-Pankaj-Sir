/*
      * 
    * * 
  * * * 
* * * * 


*/
#include <stdio.h>

int main()
{
    int row, space, star;
    int n = 4;
    
    for(row = 1; row<=n; row++){
        // printing ledding space
        for(space = 1; space<=n-row; space++){
            printf(" ");
        }
        
        for(star = 1; star <= row; star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
