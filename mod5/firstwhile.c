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
#define MAXSTUDENTS

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 0nly
    // Task 3: Ask user how many values they need to enter
    // Task 4: If user enters a number below MINCOUNT set it MINCOUNT
    //         and if user enters a value greater than MAXCOUNT, set 
    //         it to MAXCOUNT 
    // Task 5: Support multiple student entries. Calulate class average.
    // Task 6: Display student letter grade.
    int grade_count = 0, student_count = 0;
    float grade, avg;
    float total = 0;
   // int MAXCOUNT = 0;
    int hw_count = 0;
    

    while(student_count < MAXSTUDENTS)
    {
    printf("How many HW values to average (between %d and %d)? ", MINCOUNT ,MAXCOUNT);
    scanf("%d", &hw_count);

    if (hw_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d.\n", 
                hw_count, MINCOUNT, MINCOUNT);
        hw_count = MINCOUNT;
    }
    if (hw_count > MAXCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d.\n", 
                hw_count, MAXCOUNT, MAXCOUNT);
        hw_count = MAXCOUNT;
    }

//    return 0;  //test

    while(grade_count < MAXCOUNT)
    {
        printf("\nEnter %d HW grade(0-100) ", grade_count +1);
        scanf("%f", &grade);
        if ((grade < 0) || (grade > 100))
        {
            printf("Invalid input. Please try again.\n");
            continue;   // invalid input
        }
        total += grade;  // add up grade 
        grade_count++;        // update test condition: sentinel
        if(grade_count == hw_count)
        {
            break;    //reach the hw_count
        }
        
    }
    avg = total/hw_count;
    printf("Your Average is [%6.2f]\n", avg);

    student_count++;
    }

    printf("\nBye amigo\n");
    return 0;
}


