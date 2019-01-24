/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:42 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>



int main()
{
    int num1, num2;

//    printf("Enter an Integer: ");
    printf("Enter an Even and Odd Integer: ");
    scanf("%d %d", &num1, &num2);
    // Test value for even or odd
    if((num1 + num2) % 2 != 0)
    {
        printf("%d and %d are an even and odd number\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not an even and odd number\n", num1, num2);
    }

    printf("Done\n");


    return 0;
}
// Function Definitions


