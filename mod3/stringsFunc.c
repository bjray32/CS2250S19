/*
 *
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:40 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>            // for string manupulation operations


int main()
{
    char first[50];
    char last[50];
    char fullName[100];  //could all be on one line

    printf("Input First and Last Name: ");
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);   // fullName = first
    strcat(fullName, " ");     // fullName = fullName + " "
    strcat(fullName, last);     // fullName = fullName + last
    printf("Your Full name is: [%s]\n", fullName);

    return 0;
}
// Function Definitions


