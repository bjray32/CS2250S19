/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:39:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4

// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 0nly
    int count = 0;
    float grade, avg;
    float total = 0;
    while(count < MAXCOUNT)
    {
        if ((grade >= 0) && (grade <= 100))
        {
        printf("\nEnter %d hw grade(0-100) ", count +1);
        scanf("%f", &grade);

        total += grade;  // add up grade 
        count++;        // update test condition: sentinel
        }
        else
        {
            continue;
        }
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("\nBye amigo\n");
    return 0;
}
// Function Definitions


