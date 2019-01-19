/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:46:54 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constats
const double GRAVITY = 6.67e-11;  // Newton's constant (m^3 kg^-1 s^2)
const double E_MASS = 5.97e24;    // Earth's Mass (kg)
const double E_RADIUS = 6371e3;   // Earth's Radius (m)s.
const double PI = 3.141592654;    // PI

// Function Prototypes

// Main Function
int main()
{
    double time = 0;
    double height = 0;
    // 1) Enter the period
    printf("Enter Time (s): \n");
    scanf("%lf", &time);

    // Calculate Height = [(G M T^2)/(4pi^2)]^1/3 - R
    height = GRAVITY * E_MASS * pow(time, 2);  //numerator
    height = height / (4 * pow(PI, 2));  //denominator
    height = pow(height, 1/3);
    height = height - E_RADIUS;

    //height = pow((GRAVITY * E_MASS * pow(time, 2)) / pow((4 * pow(time, 2)), 2)), (1/3));

    // Display result
    printf("Satallite height is %lf\n", height);


    return 0;
}
// Function Definitions


