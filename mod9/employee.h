/*
 * =====================================================================================
 *
 *       Filename:  employee.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:09:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brenton Ray (), brentonray@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  EMPLOYEE__INC__
#define  EMPLOYEE__INC__

// Constants & Globals
#define TAXRATE1 0.10   // 10% tax rate
#define TAXRATE2 0.25   // 25% tax rate
#define TAXRATE3 0.75   // 75% tax rate

typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;
}Employee;  // nickname of struct

// Function Prototypes
double CalcNet(Employee emp);  // pass by value
double CalcGross(Employee* emp);  // pass by reference, asterisk makes it a pointer
void CreateEmployee(Employee* emp);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);

#endif /* ----- #ifndef EMPLOYEE__INC__ ----- */

