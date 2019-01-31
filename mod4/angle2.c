/*
 * =====================================================================================
 *
 *       Filename:  angle2.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: angle between 0 and 90
 *                  Quadrant II: angle between 90 and 180
 *                  Quadrant III: angle betwee 180 and 270
 *                  Quadrant IV: angle between 270 and 360
 *                  If angle is 0, then print positive X axis
 *                  If angle is 90, then print positive X axis
 *                  If angle is 180, then print positive X axis
 *                  If angle is 270, then print positive X axis
 *
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
{
    int angle;
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

    else if (angle == 0 || angle == 90 
            || angle == 180 || angle == 270) // For angles on axis
    {
        switch (angle)
            {
                case 0:
                    printf("The angle is on the positive X axis\n);
                    break;
                case 90:
                    printf("The angle is on the positive Y axis\n);
                    break;
                case 180:
                    printf("The angle is on the negative X  axis\n);
                    break;
                case 270:
                    printf("The angle is on the negative Y  axis\n);
                    break;
            }
    else
    { 
        printf("\nIncorrect angle\n);
    }
        

    return 0;
}
// Function Definitions


