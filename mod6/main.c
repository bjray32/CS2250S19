/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Programming Assignment [Part 2] #6
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
#include <stdlib.h>

// Constants
#define PLAYERS 2
#define UPDATE_RATING 'u'  // Though nice and better form, this is not neccessary
#define OUTPUT_RATING 'a'  // but better for understanding the code
#define REPLACE       'r'
#define OUTPUT_ROSTER 'o'
#define EXIT          'q'
// Function Prototypes

// Main Function
int main()
{
    int jersey[PLAYERS];
    int rating[PLAYERS];
    char choice;
    int jersey_temp, rating_temp, replace_temp;

    for(int i = 0; i < PLAYERS; i++)
    {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d", &jersey[i]);
        printf("Enter player %d's rating:\n", i + 1);
        scanf("%d", &rating[i]);
    }
    
    printf("ROSTER\n");   // Not really sure if I have to change the integer every time...? i, j, k
    for(int j = 0; j < PLAYERS; j++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", j + 1, jersey[j], rating[j]);
    }
    

    do
    {   // FOR THE LOVE OF GOD! KEEP MENU ITEMS INSIDE 'DO-WHILE' LOOP OR
        // IT WILL REPEAT ITSELF INFINENTLY!!!
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("\nChoose an option: ");
        scanf(" %c", &choice);   // Don't forget to put a space in from of %c so it will
                                 // register the character and not the space

        switch(choice)
        {
            case UPDATE_RATING:
                printf("Enter a jersey number:\n");
                scanf("%d", &jersey_temp);
                for(int k = 0; k < PLAYERS; k++)
                {
                    if(jersey[k] == jersey_temp)
                    {
                        printf("Enter a new rating for player:\n");
                        scanf("%d", &rating[k]);
                    }
                }
                break;

            case OUTPUT_RATING:
                printf("Enter a rating:\n");
                scanf("%d", &rating_temp);
                printf("\nABOVE %d", rating_temp);
                for(int l = 0; l < PLAYERS; l++)
                {
                    if(rating[l] > rating_temp)
                    {
                        printf("Player %d -- Jersey number: %d, Rating: %d\n", l + 1, jersey[l], rating[l]);
                    }
                }

                break;

            case REPLACE:
                printf("Enter a jersey number:\n");
                scanf("%d", &replace_temp);
                for(int m = 0; m < PLAYERS; m++)
                {
                    if(jersey[m] == replace_temp)
                    {
                        printf("Enter a new jersey number:\n");
                        scanf("%d", &jersey[m]);
                        printf("Enter a rating for the new player:\n");
                        scanf("%d", &rating[m]);
                    }
                }

                break;

            case OUTPUT_ROSTER:
                printf("ROSTER\n");
                for(int j = 0; j < PLAYERS; j++)
                    {
                        printf("Player %d -- Jersey number: %d, Rating: %d\n", j + 1, jersey[j], rating[j]);
                    }
                break;
         }
    } while(choice != EXIT);
    
    return 0;
}
// Function Definitions


