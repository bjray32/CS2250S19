/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Programming Assignment #6
 *
 *        Version:  1.0
 *        Created:  02/18/2019 07:00:41 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -Wall -o a.out -lm
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
#define PERSONS 5
// Function Prototypes

// Main Function
int main()
{
    double weight[PERSONS];
    double total;
    double avg;
    double max = 0;

    for(int i = 0; i < PERSONS; i++)
    {
        printf("Enter weight %d:\n", i + 1);
        scanf("%lf", &weight[i]);
        total += weight[i];
        avg = total / PERSONS;
        if(max < weight[i])
        {
            max = weight[i];
        }
    }
    printf("You entered: ");
    for(int j = 0; j < PERSONS; j++)
    {
        printf("%lf ", weight[j]);
    }
    printf("\n");

    printf("\nTotal weight: %lf\n", total);
    printf("Average weight: %lf\n", avg);
    printf("Max weight: %lf\n", max);

    return 0;
}
// Function Definitions


