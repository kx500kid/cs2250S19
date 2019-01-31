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
 *       Compiler:  gcc angle2.c -o angle2.out -lm
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>     // for regular abs()
#include <math.h>       // for fabs()

// Constants

// Function Prototypes

// Main Function
int main()
{ int angle;
    printf("Please enter an angle: ");
    scanf("%d", &angle);

    if(angle < 0)
    {
        angle = fabs( 360 + angle);
    }

    // Check for angles > 360
    angle = angle % 360;

    if (angle > 0 && angle < 90) // Quadrant I
    {
        printf("\nThe angle is in quadrant I\n");
    }
    else if (angle > 90 && angle < 180) // Quadrant II
    {
        printf("\nThe angle is in quadrant II\n"); 
    }
    else if (angle > 180 && angle < 270) // Quadrant III
    {
        printf("\nThe angle is in quadrand III\n");
    }
    else
    { 
        printf("\nIncorrect angle\n);
    }
        

    return 0;
}
// Function Definitions


