/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: angle between 0 and 90
 *                  Quadrant II: angle between 90 and 180
 *                  Quadrant III: angle between 180 and 270
 *                  Quadrant IV: angle between 270 and 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:03 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>    // for regular abs
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    int angle;

    printf("Enter an angle: ");
    scanf("%d", &angle);
    // Check for angles greater than 360
    //angle = angle % 360;
    // angle = sqrt(pow(angle % 360, 2));
    angle = angle % 360;

    if(angle < 0)
    {
        angle = abs(360 + angle);
    }

    if (angle > 0 && angle <90)
    {
        printf("Angle is in Quandrant I\n");
    }
    else if (angle > 90 && angle < 180)
    {
        printf("Angle is in Quandrant II\n");
    }
    else if (angle > 180 && angle < 270)
    {
        printf("Angle is in Quadrant III\n");
    }
    else if (angle > 270 && angle < 360)
    {
        printf("Angle is in Quadrant IV\n");
    }    
    else
    {
        printf("\nIncorrect angle\n");
    }
    
    return 0;
}
// Function Definitions


