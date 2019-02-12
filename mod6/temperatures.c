/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:38:59 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o.out
 *
 *         Author:  Morgan Sorensen (), morgansorensen@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
// when dealing with arays, it's best to controll them with constants
# define NUM 4

// Function Prototypes

// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    
    printf("Enter the max and min Ogden temp for the next %d days\n", NUM);
    // task: capture max and min tmeps from user
    
    // Task: Display information
    for(int i = 0; i < NUM; i ++)
    {
        printf("%d day max and min\n", i+1);
        scanf("%lf %lf", &max_ogden[i], & min_ogden[i]);

    printf("%2d max[%6.2lf] min[%6.2lf] temps in Ogden/n", i+1,
            max_ogden[i], min_ogden[i]);
    }       
    // Task: Calculate the average and min and max of the date range
    
    

    return 0;
}
// Function Definitions


