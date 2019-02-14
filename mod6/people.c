/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  Analyze persons records
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:08:29 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define PERSONS 5
#define ATTRI   3   // Attributes
#define AGE     0
#define WEIGHT  1
#define HEIGHT  2
// Function Prototypes

// Main Function
int main()
{
    //          [row][cols]
    
    double people[PERSONS][ATTRI];              /* 2D array */
    srand(time(0));    // set random seed

    for(int i = 0; i < PERSONS; i++)            /* loop over PERSONS 1D*/
    {
        for(int j = 0; j < ATTRI; j++)          /* loop over ATTRI (attributes) 2D*/
        {
            if(j == AGE)
            {
                people[i][j] = rand() % 50;   // set age 0-50
            }
            if(j == WEIGHT)
            {
                people[i][j] = rand() % 200;   // set weight 0-200 kg
            }
            if(j == HEIGHT)
            {
                people[i][j] = rand() % 200;   // set height 0-200 cm
            }
        }
    }
    // Now display information
    

    for(int row = 0; row < PERSONS; row++)
    {
        printf("%d person information\n", row +1);
        for (int col = 0; col < ATTRI; col++)
        {

            switch (col) 
            {
                case AGE:
                    printf("\tYour age is %6.0lf\n", people[row][col]);
                    break;
                case WEIGHT:
                    printf("\tYour weight is %6.0lf\n", people[row][col]);
                    break;
                case HEIGHT:
                    printf("\tYour height is %6.0lf\n", people[row][col]);
                    break;
            }  /* end of switch */
        }  // end of col loop
        printf("Done with attributes\n");
    } // end of row loop
    printf("%d person information\n", row +1);



    return 0;
}
// Function Definitions


