/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Creat program to play with temperature.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:44 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature
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
    int choice;
    double in_temp;
    double out_temp;

    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice: \n");
    printf("\t0 for Celcisus or 1 for Farenheit:\n");
    scanf("%d", &choice);

    //  2) Based on choice, calculate Celisus or Fahrenhiet
    if (choice == 1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
    
        out_temp = (in_temp * 9.0/5) + 32;
    }
    else if (choice == 1)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);

        out_temp = (in_temp - 32) * 5.0/9.0;
    }
    else 
    {
        printf("Sorry, you did not enter 0 or 1");
    }




            
    return 0;
}
// Function Definitions



