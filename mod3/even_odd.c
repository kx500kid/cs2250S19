/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determint if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:34 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
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
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    // test value for even or odd

    if(num %2 == 0)
    {
         printf("%d is even\n", num);
         
    }
    printf("Bye"\n);
    return 0;
}
// Function Definitions


