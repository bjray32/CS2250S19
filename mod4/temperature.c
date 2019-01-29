/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Play with float points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:28:46 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature.out
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
int main()
{
    double in_temp, out_temp;
    int choice;


    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n)");
    printf("\t0 for Celsius or 1 for Fahrenheit: )");
    scanf("%d", &choice);
    // 2) Base pm choice calculate Celsius or Fahrenheit
    out_temp = 0;
    if (choice == 0)
    {
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &in_temp);
    // Convert from celsius to Fahrenheit
    out_temp = (in_temp * 9.0/5.0) + 32;
    printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
    }
    else if (choice == 1)
    {
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &in_temp);
    out_temp = (in_temp - 32) * 5.0/9.0;
    printf("Your temperature in Celsius is: %lf\n", out_temp);
    }
    else
    {
        out_temp = 0;
        printf("Sorry, you did not enter 0 or 1\nAdios amigo\n");
        return 0;
    }
    return 0;
}
// Function Definitions


