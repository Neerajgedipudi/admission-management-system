
#include "admission_management_system.h"
#include "global.h"
#include <stdio.h>

void feeconseesion() // fee discount based on 12th percentage
{
    float percentage;
    int valid = 0; //  to indicate if a valid input has been entered

    while (!valid) {// if percentage greater than 100 and less than 0 are invalid input this while loop helps the user to re enter the input
        printf("Enter your PUC percentage:\n");
        if (scanf("%f", &percentage) != 1 || percentage < 0 || percentage > 100) {
            printf("Invalid input. Please enter a valid percentage between 0 and 100.\n");
        } else {
            valid = 1; // Valid input has been entered
        }
    }

    if (percentage >= 89.9 && percentage <= 100) {
        printf("You are eligible to get a 25 percent fee concession\n");
        discountamount = coursefee * 0.25;
    } else if (percentage >= 79.9 && percentage < 89.9) {
        printf("You are eligible to get a 15 percent fee concession\n");
        discountamount = coursefee * 0.15;
    } else if (percentage >= 74.9 && percentage < 79.9) {
        printf("You are eligible to get a 10 percent fee concession\n");
        discountamount = coursefee * 0.10;
    } else {
        printf("You are not eligible to get a fee concession\n");
        discountamount = 0;
    }

    discountprice = coursefee - discountamount;
}
