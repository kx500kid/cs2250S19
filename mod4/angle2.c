/*
 * =====================================================================================
 *
 *       Filename:  angle2.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I:
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:41:25 AM
 *       Revision:  none
 *       Compiler:  gcc
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
{ int angle;
    printf("Please enter an angle: ");
    scanf("%d", &angle);

    if (angle > 0 && angle < 90) // Quadrant I
    {
        printf("\nThe angle is in quadrant I\n");
    }
    else if (angle > 90 && angle < 180) // Quadrant II
    {
        printf("\nThe angele is in quadrant II\n"); 
    }
    else if (angle > 180 && angle < 270)
    else
    { 
        printf("\nIncorrect angle\n);
    }
        

    return 0;
}
// Function Definitions


