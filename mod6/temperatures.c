/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperatrure analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:07 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o temperatures.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Constants
#define NUM 40
#define MIN 20   // min temp
#define MAX 45   // max temp
// Function Prototypes

// Main Function
int main()
{
    double max_ogden[NUM];   // posting NUM values for ogden
    double min_ogden[NUM];
    srand(time(0));     // set random seed
    // Task: Capture max and min temps from user
    printf("Simulating the max and min temperatures of Ogden for the nex %d days\n ", NUM);
    for(int i = 0; i < NUM; i++)
    {
//        printf("%d day max and min\n", i+1);
//        scanf("%lf %lf", &max_ogden[i], &min_ogden[i]);
        min_ogden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        max_ogden[i] = min_ogden[i] + (rand() % (MAX - MIN));
    }

    // Task: Display information
    
    for(int i = 0; i < NUM; i++)
    {
        printf("%2d  max [%6.2lf] min [%6.2lf] temps in Ogden\n", i+1, max_ogden[i], min_ogden[i]);
    }

    // Task: Calcuate the average and min and max of the date range
    for(int i = 0; i < NUM; i++)
    {

        
    }
    
        
    return 0;
}
// Function Definitions


