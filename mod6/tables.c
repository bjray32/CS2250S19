/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Display multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:49:35 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TABLES 10
// Function Prototypes

// Main Function
int main()
{
    
    for(int i = 1; i <= TABLES; i++)
    {
        for(int j = 1; j <= TABLES; j++)
        {
            printf("%3d\t", i * j);
        }
        printf("\n");
    }



    return 0;
}
// Function Definitions


