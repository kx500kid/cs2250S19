/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *   
 *
 *    Description:  Get the distance when it is dropped from a building.
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:06:43 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 9.8;// ms^2
const double BUILDING = 500; // meters

// Function Prototypes

// Main Function
int main()
{
    double time = 0;
    double distance =0;
    double fromGround = 0;

    // Take user input: time traveled
    printf("Input time traveled: ");
    scanf("%lf", &time);

    //Formula: s = 0.5 g * t^2
    distance = 0.5 * GRAVITY * pow(time, 2);

    // Display Distance
    printf("After %lf seconds, your ball travled %lf meters.\n",
            time, distance);
    // Distance from the ground in meters
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from the ground.\n", fromGround);
    return 0;
}
// Function Definitions


