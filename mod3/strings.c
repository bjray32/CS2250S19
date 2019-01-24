/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings.
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:20 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

const int SIZE = 50;

int main()
{
    // A string is a list/collection of characters (array)
    //  Strings use %s as the placeholder

    char fName[SIZE];     // Nul takes one character at the end automatically
    char lName[SIZE];
    printf("Please enter your first name (< %d characters, NO spaces): ", SIZE);
    // When using arays, DO NOT include the '&' operator in scanf
    scanf("%s", fName);
    printf("Please enter your last name (< %d characters, NO spaces): ", SIZE);
    scanf("%s", lName);
    printf("Hi [%s][%s]\n", fName, lName);

    return 0;
}
// Function Definitions


