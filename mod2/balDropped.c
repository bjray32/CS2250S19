/*
 * =====================================================================================
 *
 *       Filename:  balDropped.c
 *
 *    Description:  Get the distance travelled by a ball when it is dropped
 *                  from a building. Inital velocity = 0.
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants.
const double GRAVITY = 9.8;   // ms^
const double BUILDING = 500;  // meters
// Function Prototypes

// Main Function
int main()
{
    
    double time = 0;
    double distance = 0;
    double fromGround = 0;

    // Take use input: time travelled
    printf("Time Travelled (s): \n");
    scanf("%lf", &time);
    // Formula: s = 0.5 g t^2
    distance = 0.5 * GRAVITY * pow(time, 2);
    // Display distance,
    printf("After %lf seconds, your ball traveled %lf meters\n", time, distance);
    // Distance to the ground in meters.
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from the ground\n", fromGround);

    return 0;
}
// Function Definitions


