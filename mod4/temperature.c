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

//const int CELSIUS = 0;
//const int FAHRENHEIT = 1;
#define CELSIUS 0
#define FAHRENHEIT 1
#define BOIL_CEL 100
#define BOIL_FAHR 212
#define FREEZE_CEL 0
#define FREEZE_FAHR 32
#define BOIL 1
#define LIQUID 2
#define ICE 3
// The above constants are equivalent

// Function Prototypes

// Main Function
int main()
{
    double in_temp, out_temp;
    int choice;
    int water_state;
    
        
    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n)");
    printf("\t0 for Celsius or 1 for Fahrenheit: )");
    scanf("%d", &choice);
    // 2) Base pm choice calculate Celsius or Fahrenheit
    out_temp = 0;
    if (choice == CELSIUS)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        // Convert from celsius to Fahrenheit
        out_temp = (in_temp * 9.0/5.0) + 32;
        printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
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

    // Task2:
    // Test for boiling point, freezing point, liquid point

    if (choice == CELSIUS)
    {
        if(in_temp >= BOIL_CEL)
        {
            water_state = BOIL;
        }
        // && -> AND
        // || -> OR
        // ! -> NOT
        // ==
        // !=
        // <, >, <=, >=

        else if (in_temp > FREEZE_CEL && in_temp < BOIL_CEL)
        {
            water_state = LIQUID;
        }
        else
        {
            water_state = ICE;
        }
    }
    else // FAHRENHEIT
    {
        if(in_temp >= BOIL_FAHR)
        {
            water_state = BOIL;
        }        
        else if (in_temp > FREEZE_FAHR && in_temp < BOIL_FAHR)
        {
            water_state = LIQUID;
        }
        else
        {
            water_state = ICE;
        }

    }
        // Switch
        switch(water_state)
        {
            case BOIL:
                printf("Your water is boiling\n");
                break;  // exit your switch
            case LIQUID:
                printf("Your water is liquid\n");
                break;
            case ICE:
                printf("Your water is ice\n");
                break;
        }
    return 0;
}
// Function Definitions

