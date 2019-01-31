/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:18:18 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // 1) Capture user input
    int month;
    printf("Please enter a month: 1 for January, 2 for Feb, etc: ");
    scanf("%d", &month);
    printf("\nPlease enter the day: ");
    scanf("%d"), &day);

    // 2) Use IF to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
        return 1;
    }
    // 3) Use SWITCH to validate day of the month
    switch (month)
    {
        // Months with 31 days
        case 1:
        case 3 :
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        
        // Months with 30 days
        case 4
        case 6
        case 9
        case 11
            if (day > 28 || day <j 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
    }
      
      
      
      
      
      
      
      








    return 0;
}
// Function Definitions


