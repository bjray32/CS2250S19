/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description:  Caculate the BMI with more precision.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:23 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    //BMI = weight/height**2

    // 1) Capture user input: weight (kilograms) and height (meters)

    // 2) Calculate BMI

    // 3) Display BMI


    double weight = 0;
    double height = 0;
    double bmi = 0;

    printf("Enter Weight (Kg):\n");
    scanf("%lf", &weight);
    printf("Enter Height (m):\n");
    scanf("%lf", &height);

    bmi = weight / (pow(height, 2.0));

    //bmi = weight / (height * height);
    printf("BMI:%lf\n", bmi);

    printf("Done\n");
    return 0;
}
// Function Definitions


