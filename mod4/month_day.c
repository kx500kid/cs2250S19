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
#define JANUARY       1
#define FEBRUARY      2
#define MARCH         3
#define APRIL         4
#define MAY           5
#define JUNE          6
#define JULY          7
#define AUGUST        8
#define SEPTEMBER     9
#define OCTOBER      10
#define NOVEMBER     11
#define DECEMBER     12

// Function Prototypes

// Main Function
int main()
{
    // 1) Capture user input
    int month, day;
    char answer;
    while (1)
    {
    printf("Please enter a month: 1 for January, 2 for Feb, etc: ");
    scanf("%d", &month);
    printf("\nPlease enter the day: ");
    scanf("%d", &day);

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
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            if(day > 30 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;

            // Months with 30 days
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            if (day > 28 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        case FEBRUART:
            if(day > 28 || day < 1)
            {
                printf("Invalid day\n");
            }

        printf("\n\nDo you want to continue [y|n]: ");
        scanf(" %c", &answer);
        if(answer != 'y' && answer != 'Y')
        {
            break; // exit loop
        }
    } // end of while loop
    return 0;
}
// Function Definitions


