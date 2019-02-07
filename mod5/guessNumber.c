/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess the random number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:11 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // rad() srand()
#include <time.h>    // time()

// Constants
#define MAX 5
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));       // set the random SEED
    guess = rand() % LIMIT;   // set random number between 0-9, changed to LIMIT
    //int i;   // before C89 you need to define i outside loop
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n", LIMIT);
        printf("You have %d opportunities left\n", MAX - i);
        scanf("%d", &number);

        if(number > guess)
        {
            printf("Guess lower\n");
        }
        else if(number < guess)
        {
            printf("Guess higher\n");
        }
        else
        {
            printf("Congratulations, you got the correct number\n");
            return 0;
        }
    } // end of for loop
    printf("Sorry, you did not guess the correct number [%d]\nPlay again\n", guess);

    return 0;
}
// Function Definitions


