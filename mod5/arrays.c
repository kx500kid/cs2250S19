/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  first look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:04:58 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3
// Function Prototypes

// Main Function
int main()
{
    //int i1, i2, i3;
    // Arrays ues index notation to access members (0 is 1st position, 1 is
    // second position, etc.
    int grades[NUM]; // array of size NUM
    for(int i = 0; i < NUM; i++)
    {
        printf("Enter a number: ");
        // Use the address (&) operatior
        // Make sure you specify th eindex position in [ ]
        scanf("%d", &grades[i]); // TODO: How do I save the faluse???
    }
    for(int i = 0; i < NUM; i ++)
    {
    printf("First number is [%d]\n", grades [0]);
    }
    return 0;
}
// Function Definitions


