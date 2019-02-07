/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  first look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:04:59 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3
// Function Prototypes

// Main Function
int main()
{
    //int i1, i2, i3;    // avoid using many variables, bad book keeping
    // Arrays use index notation to access members starting with zero
    int grades[NUM];   // array of size NUM
    
    for(int i = 0; i < NUM; i++)
    {
        printf("Enter a number: ");
        // DO NOT use the address (&) operator
        // Make sure you specify the inder position in [ ] 
        scanf("%d", grades[i]);  // TODO: How do I save the values?
    }
    printf("First number is [%d]\n", grades [0]);
    return 0;
}
// Function Definitions


