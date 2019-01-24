/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based:
 *                  radius and theta angle (degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:54 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
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
const double PI = 3.141592654;
// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;
    
    // 1) Capture user input for radius and theta (degrees)
    printf("Input Radius: ");
    scanf("%lf", &radius);
    printf("Input Theta (degrees): ");
    scanf("%lf", &theta);
    // 2) Convert the theta angle to radians
    theta = (theta*PI/180.0);
    // 3) Calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    // 4) Print the result
    // %.2lf use obly 2 decimal places
    // %6.2lf use only 2 decimal places, 6 chars wide
    // %-6.2lf use only 2 decimal places, 6 chars wide, left justify
    // %06.2lf use only 2 decimal places, 6 chars wide, zero patted
    printf("Cartesian Coordinates: x = [%.2lf]\n", x_pos);
    printf("Cartesian Coordinates: y = [%.2lf]\n", y_pos);

    return 0;
}
// Function Definitions


