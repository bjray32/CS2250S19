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
#define ADD 1
#define SUB 2
#define MUL 3
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice = 0;
    // Validate argument count, return 1 otherwise

    if(argc != 3)
    {
        printf("Missing input parameters\n");
        printf("Usage: ./%s <PARAM1> <PARAM2>\n", argv[0]);
        return 1;
    }
    printf("What do you want to do with these numbers?\n");
    printf("\t 1) Addition\n");
    printf("\t 2) Subtration\n");
    printf("\t 3) Multiplication\n");
    scanf("%d", &choice);

    switch (choice) 
    {
        case ADD:
            break;

        case SUB:
            break;

        case MUL:
            break;

        default:
           printf("Unsupported function\n");
    }				/* -----  end switch  ----- */

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


