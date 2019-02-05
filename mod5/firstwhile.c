/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:39:50 AM
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
#define MINCOUNT 2
#define MAXCOUNT 5

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 0nly
    // Task 3: Ask user how many values they need to enter
    // Task 4: If user enters a number below MINCOUNT set it MINCOUNT
    //         and if user enters a value greater than MAXCOUNT, set 
    //         it to MAXCOUNT 
    int count = 0;
    float grade, avg;
    float total = 0;
   // int MAXCOUNT = 0;
    int student_count = 0;

    printf("How many HW values to average (between %d and %d)? ", MINCOUNT ,MAXCOUNT);
    scanf("%d", &student_count);

    if (student_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d.\n", 
                student_count, MINCOUNT, MINCOUNT);
        student_count = MINCOUNT;
    }
    if (student_count > MAXCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d.\n", 
                student_count, MAXCOUNT, MAXCOUNT);
        student_count = MAXCOUNT;
    }

    return 0;  //test

    while(count < MAXCOUNT)
    {
        printf("\nEnter %d HW grade(0-100) ", count +1);
        scanf("%f", &grade);
        if ((grade < 0) || (grade > 100))
        {
            printf("Invalid input. Please try again.\n");
            continue;   // invalid input
        }
        total += grade;  // add up grade 
        count++;        // update test condition: sentinel
        if(count == student_count)
        {
            break;    //reach the student_count
        }
        
    }
    avg = total/student_count;
    printf("Your Average is [%6.2f]\n", avg);
    printf("\nBye amigo\n");
    return 0;
}


