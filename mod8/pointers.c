/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  pointers>
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:40:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void PrintValues(int num, int* p_num);

// Main Function
int main(int argc, char* argv[])
{
    int i = 7;
    int* pi = &i;   // It can store address of integer variables

    PrintValues(i, &i);  // Use the address of the variable
    // Modify i
    i *= 2;
    PrintValues(i, pi);  // Use the pointer to the variable
    // Change the value via the pointer
    *pi = 99;  // Use the dereference operator to update value at the address
    PrintValues(i, pi);  // Use the pointer to the variable

    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintValues
 *  Description:  Print the values of an integer and a pointer to integer
 *   Param: num:  Integer
 *  Param: p_num:  Pointer to ientger
 * =====================================================================================
 */
void PrintValues(int num, const int* p_num)
{
    printf("Value of i = [%d] and pi = [%d]\n", num, *p_num);
//    printf("Value of pi = [%p] address of pi = [%p]\n", pi, &pi);
//    printf("Value at the address of pi = [%d]\n", *pi);

    return;
}

