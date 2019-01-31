/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of Satalite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:35 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 6.67e-11;      //Newton's constant (m^3) kg^-1 s ^2)
const double E_MASS = 5.97e24;        // Earth's Mass (kg)
const double E_RADIUS = 6371e3;       // Earth's Radius (meters)
const double PI = 3.141592654;        // Pi 
// Function Prototypes

// Main Function
int main()
{
    double period = 0;
    double height = 0;
    double temp1 = 0;

   // 1) Enter the period
   printf("Enter the period: \n");
   scanf("%lf", &period);

   // Height = [(G M T^2)/(4PI^2)]^1/3 - R
   
   temp1 =((GRAVITY * E_MASS * (pow(period, 2))) / ((4 * pow(PI, 2))));
   height =(pow(tmep1, (1 / 3))) - E_RADIUS;

   // Display result
   
   printf("The height is: %lf", height);
   
   return 0;
}
// Function Definitions

 
