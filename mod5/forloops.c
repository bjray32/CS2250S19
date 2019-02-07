/*
 * =====================================================================================
 *
 *       Filename:  forloops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:39:48 AM
 *       Revision:  none
 *       Compiler:  gcc forloops.c -o forloops.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    for (int i = 0; i < MAX_NUMBER; i++) 
    {
        printf("Your i is [%d] num++[%d]\n", i, num++);
        printf("Your num [%d]\n", num);
        printf("Your i is [%d] ++num[%d]\n", i, ++num);
        
    }




    printf("Bye\n");
    return 0;
}
// Function Definitions


