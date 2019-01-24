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
    scanf("%lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    // 2) Convert the angle to radians
    theta = (theta*PI/180.0);
    // 3) Calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    // 4) Print the result
    printf("Your Cartesian coordinates, x = [%lf], y = [%lf]\n",
            x_pos, y_pos);
    double radius, theta, x_pos, y_pos;


    printf("Please type value for radius: \n");
    scanf("
    

    return 0;
}
// Function Definitions


