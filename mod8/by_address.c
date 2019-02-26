/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Sending information to functions?
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:37:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(double* x, double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);

// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {

    printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
    return 1;

    }
    x = atof(argv[1]);  // Convert the first input param to double
    y = atof(argv[2]);  // Convert the second input param to double
    printf("Your current original position address is (%p, %p)\n", &x, &y);
    DisplayOrigPosition(&x, &y);   //  takes two address of type double
    UpdatePosition(&x, &y, 2.0, 4.1);
    DisplayOrigPosition(&x, &y);   //  takes two address of type double

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current point position
 *        Param:  x => x coordinate
 *        Param:  y => y coordinate
 *      Returns:  N/A
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf, %4.2lf)\n", x, y);
    printf("Your current position address is (%p, %p)\n", &x, &y);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayOrigPosition
 *  Description:  Display current point position of actual values
 *        Param:  x => x coordinate
 *        Param:  y => y coordinate
 *      Returns:  N/A
 * =====================================================================================
 */
void DisplayOrigPosition(double* x, double* y)
{
    printf("Your current position address is (%4.2lf, %4.2lf) (orig)\n", *x, *y);
    printf("Your current original position address is (%p, %p) (orig)\n", x, y);
    // To display the values of pointers/address use the
    // dereference operator " * ". This only applies to pointers
    // When dealing with pointers (address) the value of whatever needs the star
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update point point position to a new position
 *        Param:  x => x coordinate address
 *        Param:  y => y coordinate address
 *        Param:  x_new => new x coordinate
 *        Param:  y_new => new y coordinate
 *      Returns:  N/A
 * =====================================================================================
 */
void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("******Updating Position*******\n");
    *x = new_x;  // Dereference the pointer to update the value
    *y = new_y;

    return;
}











