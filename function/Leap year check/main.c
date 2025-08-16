//Check if a year is a leap year

#include <stdio.h>

int isLeapYear (int year){
  /*  if (year % 400 == 0)
    {
        return 1; // leap year
    }
    else if (year % 100 == 0) {
        return 0; // Not a leap year
    }
    else if (year%4 == 0 ) {
        return 1; // leap year
    }
    else{
        return 0; // Not leap year
    }
} */

return (year % 400 == 0) ? 1 : (year % 100 == 0) ? 0: ( year % 4 == 0) ? 1 : 0;
}

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    
    if(isLeapYear(year)) {
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is Not a leap year\n", year);
    }
       

    return 0;
}