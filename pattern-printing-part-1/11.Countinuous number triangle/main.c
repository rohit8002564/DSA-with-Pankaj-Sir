/*
1 
23
456
78910
*/

#include <stdio.h>

int main()
{
    int num = 1;  // Start with 1

    for(int row = 1; row <= 4; row++) {        // Fixed 4 rows
        for(int col = 1; col <= row; col++) {  // Number of columns = row number
            printf("%d", num);
            num++;  // Increase number after every print
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
