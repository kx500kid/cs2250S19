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
    int num1, num2;
    
    printf("Enter an integer: ");
    scanf("%d %d", &num1, &num2);
    // test value for even or odd

    if((num1 + num2) % 2 ! == 0);
    {
         printf("%d is even and %d is odd\n", num1, num2);
         
    }
    else
    {
        printf("%d is odd\n", num);
    }
    printf("Bye\n");
    return 0;
}
// Function Definitions


