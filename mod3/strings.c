/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:33 AM
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
const int SIZE = 50;

// Main Function
int main()
{

    // A string is a list /collection of characters (aray)
    // Strings use %s as teh placeholder
    //

    char fName[SIZE];     // strings are whatever you have + 1

    printf("Please enter your name (<50 characters, No space): ");

    
    //When using arrays, DO NOT include the '&' operator
    // in your scanf

    scanf("%s", fName);
    printf("Hi [%s]\n:, fName);
    return 0;
}
// Function Definitions


