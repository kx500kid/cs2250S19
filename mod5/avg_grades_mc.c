/*
 * =====================================================================================
 *
 *       Filename:  avg_grade_mc.c
 *
 *    Description:  learn shile loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:49 AM
 *       Revision:  none
 *       Compiler:  gcc avg_grade_mc.c -o avg_grade_mc.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>      // true and false variables
#include <stdlib.h>       // rand(), srand()
#include <time.h>         // time()
// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3
// Function Prototypes

// Main Function
int main()
{
    // 1) Calculate the average of user input values
    // 2) Validate user input for 0 to 100 only
    // 3) Ask user how many values they need to enter
    // 4) If user enters a number below MINCOUNT set it MINCOUNT 
    //    and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    // 5) Support multiple student entries. Calculate calss average.
    // 6) Display student letter grade
    
    int count = 0;
    float grade, avg;
    float total = 0;
    int hw_count = 0;
    
    while(true) // loop over students (to calculate class average)
    {
    printf("How many hw values you want to enter (between %d and %d)?",
            MINCOUNT, MAXCOUNT);
    scanf("%d", &hw_count);
    if(hw_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d\n",
                hw_count, MINCOUNT, MINCOUNT);
    }
    if(hw_count > MAXCOUNT)
    {
        printf("%d is greateer than %d. Setting your entry to %d\n", 
                hw_count, MAXCOUNT, MAXCOUNT);
    }
    while(count < MAXCOUNT)
    {
        printf("\nEnter %d a hw grade(0-100): ", count);
        scanf("%f", &grade);
        if (grade < MINGRADE || grade > MAXGRADE)
        {
            printf("Invalid input. Pleas try again\n");
            continue;   // invalid input. Continue takes to the top of the loop
        }
        total += grade; // add up grades
        if(count == hw_count)
        {
            break; // reach teh hw_count
        }


        count++; // update test condition: sentinel
    }   // end of on student loopl
    
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    } // end of students loop
    printf("Bye amigo\n");
    
    return 0;
    }
// Function Definitions
