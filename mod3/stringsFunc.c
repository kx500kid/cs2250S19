/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:22 AM
 *       Revision:  none
 *       Compiler:  gcc sstringsFunc.c -o stringsFunc.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>      // for string manupulation operations

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];

    printf("Please enter first name: \n");
    scanf("%s", first);

    printf("Please enter last name: \n");
    scanf("%s", last);

    printf("Your first and last name are: %s %s\n", first, last);
    strcpy(fullName, first); // fullName = first
    strcat(fullName, " ");   // fullName = fullName + " "
    strcat(fullName, last);  // fullName = fullName + last
    
    printf("Your full name is : %s\n", fullName);

    return 0;
}
// Function Definitions


