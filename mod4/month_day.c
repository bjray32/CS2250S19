/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  Take month and day from user, then verify entries are valid.
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:17:13 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out -lm
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


// Main Function
int main()
{

    // 1) Capture user input
    int month;

    printf("Enter Month (1-12): ");
    scanf("%d", &month);

    // 2) Use IF to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
//            return 1;
    }
    // 3) Use SWITCH to validate day of the month



    return 0;
}
// Function Definitions


