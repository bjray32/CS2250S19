/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Caculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:23 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
    //BMI = weight/height**2

    // 1) Capture user input: weight (kilograms) and height (meters)

    // 2) Calculate BMI

    // 3) Display BMI


    int weight = 0;
    int height = 0;
    int bmi = 0;

    printf("Enter Weight (Kg):\n");
    scanf("%d", &weight);
    printf("Enter Height (m):\n");
    scanf("%d", &height);

    //BMI = numWeight / (pow(numHeight, 2.0));

    bmi = weight / (height * height);
    printf("BMI:%d\n", bmi);

    printf("Done\n");
    return 0;
}
// Function Definitions


