/*
 * =====================================================================================
 *
 *       Filename:  bmi.c    v
 * *
 *    Description:  Calculate the BMI with floating points (IEEE-754).
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:26 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi -lm
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> // This needs to be here for math functions to workd
// The compiler comand must also include -lm

// Constants

// Function Prototypes

// Main Function
int main()
{
    //BMI = weight/height**w
    // 1) Capture user inpui: weight (kg) and height (meters)
    // 2) Calculate BMI
    // 3) Display BMI
    //
    double weight = 0;
    double height = 0 ;
    double BIM = 0;
    

    printf("Enter weight in KG: \n");
    scanf("%lf", &weight);

    printf("Enter height in meters: \n");
    scanf("%lf", &height);
    
    BMI = weight/pow(height, 2);
    printf("With %lf kg and %lf meters, your BMI is %lf\n", weight, height,bmi);
    printf("Done\n);
    return 0;
}
// Function Definitions


