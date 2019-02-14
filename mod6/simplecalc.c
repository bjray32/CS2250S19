/*
 * =====================================================================================
 *
 *       Filename:  simplecalc.c
 *          Usage:  ./simplecalc.out <PARAM1> <PARAM2>
 *
 *    Description:  Calculate the sum, difference, product of two input parameters
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:28:31 AM
 *       Revision:  none
 *       Compiler:  gcc simplecalc.c -o simplecalc.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    // Validate argument count, return 1 otherwise

    if(argc != 3)
    {
        printf("Missing input parameters\n");
        printf("Usage: ./%s <PARAM1> <PARAM2>\n", argv[0]);
        return 1;
    }

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


