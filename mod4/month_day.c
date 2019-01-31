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
    int month, day;

    printf("Enter Month (1-12): ");
    scanf("%d", &month);
    printf("Enter Day(1-31): ");
    scanf("%d", &day);

    // 2) Use IF to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
            return 1;
    }
    // 3) Use SWITCH to validate day of the month
    switch(month)
    {
        // Moths with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day > 31 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        // Months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            if(day > 30 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        // February
        case 2:
            if(day > 28 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
    }



    return 0;
}
// Function Definitions


