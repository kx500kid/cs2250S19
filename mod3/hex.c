/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  Text hex numbers
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:42 AM
 *       Revision:  none
 *       Compiler:  gcc hex.x -o hex.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;

// Function Prototypes

// Main Function
int main()
{
    unsigned char  hex;
    // 1) Ask user to enter one hex number (1 byte max)
    printf("Enter one hex number: ");
    scanf("%hhx", &hex);
    printf("Hex [%02X] and dec [%d]\n", hex, hex;);
    
    // 2) Tell me which bits/pins are ON
    
    if(hex == PIN1) // Use BITWISE AND "&"
    return 0;
}
// Function Definitions


