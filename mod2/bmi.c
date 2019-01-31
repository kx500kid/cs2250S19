/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:26 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
{
    //BMI = weight/height**w
    // 1) Capture user inpui: weight (kg) and height (meters)
    // 2) Calculate BMI
    // 3) Display BMI
    //
    int weight = 0;
    int height = 0 ;
    int BMI= 0;
    

    printf("Enter weight in KG: \n");
    scanf("%d", &weight);

    printf("Enter height in meters: \n");
    scanf("%d", &height);
    
    BMI = weight/(height * height);
    printf("With %d kg and %d meters, your BMI is %d\n", weight, height, bmi);
    printf("Done\n);
    return 0;
}
// Function Definitions


