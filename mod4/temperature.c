/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with floating points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:28:46 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
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
    float temp = 7.9;    //Celsius
    double f_temp = 0;
    // For floats use the %f placeholder
    printf("The temperature is %f Celcius\n", temp);
    printf("What is the temperature in Ogden now in Celsius: ");
    //use %f to capture float information
    //use %lf to capture fdouble information
    scanf("%f", &temp);
    // Conver from Celsius to Fahrenheight
    f_temp = (temp * 9/5) + 32;
    printf("I see, your temp is %lf in Fahrenheit.\n", f_temp);

    return 0;
}
// Function Definitions


