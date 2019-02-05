/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn shile loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:49 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4

// Function Prototypes

// Main Function
int main()
{
    // 1) Calculate the average of user input values
    // 2) Validate user input for 0 to 100 only
    int count = 0;
    float grade, avg;
    float total = 0;
    while(count < MAXCOUNT)
    {
        printf("Enter %d a hw grade(0-100): ", count);
        scanf("%f", &grade);
        if (grade < 0 || grade > 100)
        {
            printf("Invalid input. Pleas try again\n");
            continue;   // invalid input. Continue takes to the top of the loop
        total += grade; // add up grades


        count++; // update test condition: sentinel
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("Bye amigo\n");
    
    return 0;
}
// Function Definitions


