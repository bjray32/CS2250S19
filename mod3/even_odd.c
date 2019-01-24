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
    int num;

    printf("Enter an Integer: ");
    scanf("%d", &num);
    // Test value for even or odd
    if(num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    printf("Done\n");


    return 0;
}
// Function Definitions


