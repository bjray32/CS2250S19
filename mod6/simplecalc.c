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
#include <stdlib.h>  // atoi() string to integer
// Constants
#define EXIT 0
#define ADD  1
#define SUB  2
#define MUL  3
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice = 0;
    int num1, num2;
    // Validate argument count, return 1 otherwise

    if(argc != 3)
    {
        printf("Missing input parameters\n");
        printf("Usage: ./%s <PARAM1> <PARAM2>\n", argv[0]);
        return 1;
    }
    // Convert input strings into integers
    num1 = atoi(argv[1]);  // first input param
    num2 = atoi(argv[2]);  // second input param

    do  // beginning of do while
    {

        printf("What do you want to do with these numbers?\n");
        printf("\t 1) Addition\n");
        printf("\t 2) Subtration\n");
        printf("\t 3) Multiplication\n");
        printf("\t 0) To Quit\n");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case ADD:
                printf("The sum of %d + %d is %d\n", num1, num2, num1 + num2);
                break;

            case SUB:
                printf("The difference of %d - %d is %d\n", num1, num2, num1 - num2);
                break;

            case MUL:
                printf("The multiplication of %d * %d is %d\n", num1, num2, num1 * num2);
                break;

            default:
             printf("Unsupported function\n");
        }
        } while(choice != EXIT); // end of do while

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


