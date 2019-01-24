/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based on :
 *                  radius and theta angle (degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:53 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double PI = 3.141592654;

// Function Prototypes

// Main Function
int main()
{

    // 1) Capture user input for radius and theta angle (degrees)
    printf("Enter your radius: ");
    scanf("%.2lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    // 2) Convert the angle to radians
    theta = (theta*PI/180.0);
    // 3) Calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    // 4) Print the result: format should be 2 decimal places for x and y
    // %.2lf use only 2 decimal places
    // %6.2lf use only 2 decimal places, 6 chars wide
    // %-6.2lf use only 2 decimal places, g chars wide, left justi.
    // %06.2lf use only 2 decimal places, 6 chars wide, zero patted.
    printf("Your Cartesian coordinates, x = [%.2lf], y = [%.2lf]\n",
            x_pos, y_pos);
   
    

    return 0;
}
// Function Definitions


