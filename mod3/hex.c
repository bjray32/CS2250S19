/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  Test hex numbers
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:45 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;

int main()
{
    unsigned char hex;
    
    // 1) Ask user to enter one hex numner (1 byte max)
    printf("Enter Hex Number(1 byte): ");
    scanf("%hhx", &hex);
    printf("Hex [%02X] and dec [%d]\n", hex, hex);
    // 2) Tell me which bits/pins are ON
    if(hex & PIN1)  // Use BITWISE AND "&"
    {
    printf("PIN1 is ON\n");
    }



    
    return 0;
}
// Function Definitions


