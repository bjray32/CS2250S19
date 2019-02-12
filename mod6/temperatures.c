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
#define NUM 4
#define MIN 20   // min temp
#define MAX 45   // max temp
// Function Prototypes

// Main Function
int main()
{
    double max_ogden[NUM];   // posting NUM values for ogden
    double min_ogden[NUM];
    double avg = 0, min_temp = 0, max_temp = 0;
    int min_day = 1, max_day = 1;
    srand(time(0));     // set random seed
    // Task: Capture max and min temps from user
    printf("Simulating the max and min temperatures of Ogden for the next %d days\n ", NUM);
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
    // Initialize your min_temp and max_temp
    min_temp = min_ogden[0];
    max_temp = max_ogden[0];
    for(int i = 0; i < NUM; i++)
    {
        avg += min_ogden[i];    // adding elements
        avg += max_ogden[i];
        if(min_temp > min_ogden[i])
        {
            min_temp = min_ogden[i];
            min_day = i + 1;
        }
        if(max_temp < max_ogden[i])
        {
            max_temp = max_ogden[i];
            max_day = i + 1;
        }
    }
    avg = avg/(NUM * 2);       // calculating avg
    printf("Your average temperature = [%6.2lf]\n", avg);
    printf("Your min temp [%6.2lf] on day [%02d]\n", min_temp, min_day);
    printf("Your max temp [%6.2lf] on day [%2d]\n", max_temp, max_day);
    
        
    return 0;
}
// Function Definitions


