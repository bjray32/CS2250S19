/*
 * =====================================================================================
 *
 *       Filename:  strings_with_spaces.c
 *
 *    Description:  Take strings with spaces
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:02:42 AM
 *       Revision:  none
 *       Compiler:  gcc strings_with_spaces.c -o strings_with_spaces.out -lm
 *          Usage:  ./strings_with_spaces.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
const int INPUT_SIZE = 50;        // Same as #define
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    char user_input[INPUT_SIZE];
    printf("Enter a string with spaces: ");
    // Get user input including spaces
    fgets(user_input, INPUT_SIZE, stdin);   // Where to, how many, and where from
    // Overwrite the ' \n ' capture by pressing ENTER in the keyboard
    user_input[strlen(user_input) - 1] = '\0';  // Set last char as NULL char
    printf("You entered [%s]\n", user_input);
    // Explore this string char by char
    for(int i = 0; i < strlen(user_input); i++)
    {
        printf("%d char is [%c]\n", i, user_input[i]);
    }

    return 0;
}
// Function Defenitions


