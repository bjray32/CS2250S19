/*
 * =====================================================================================
 *
 *       Filename:  scanChars.c
 *
 *    Description:  Scan Charaters
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:41:31 AM
 *       Revision:  none
 *       Compiler:  gcc scanChars.c -o scanChars.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


int main()
{
    char cIn;
    printf("Enter a character: ");
    scanf(" %c", &cIn);     // A space before %c makes it scan for characters only
    printf("You entered [%c]\n", cIn);
    
    // Note: When capturing chars, use an extra space
    // in your scanf function e.g. " %c"
    // this will help capture one characters and not the
    // ENTER key
    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n", cIn);

    return 0;
}
// Function Definitions


