#include "admission_management_system.h"
#include "global.h"
#include <stdio.h>

int feeconseesion() // fee discount based on 12th percentage
{
    int valid = 0; // to indicate if a valid input has been entered

    while (!valid) { // Validate 10th percentage input
        printf("Enter your 10th percentage:\n");
        if (scanf("%f", &tenth_percentage) != 1 || tenth_percentage < 0 || tenth_percentage > 100) {
            printf("Invalid input. Please enter a valid percentage between 0 and 100.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else if (tenth_percentage <= 58) {
            printf("You are not eligible to join. Please reapply for admission.\n");
            return 0; // Indicate that the student is not eligible
        } else {
            valid = 1; // Valid input has been entered
        }
    }
    
    int puc_valid = 0;
    while (!puc_valid) { // Validate PUC percentage input
        printf("Enter your PUC percentage:\n");
        if (scanf("%f", &percentage) != 1 || percentage < 0 || percentage > 100) {
            printf("Invalid input. Please enter a valid percentage between 0 and 100.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else if (percentage <= 58) {
            printf("You are not eligible to join.\n");
            return 0; // Indicate that the student is not eligible
        } else {
            puc_valid = 1; // Valid input has been entered
        }
    }

    printf("Do you need a fee concession? (y/n):\n");
    while (getchar() != '\n'); // Clear input buffer before reading the next input
    char concession_choice = getchar();

    if (concession_choice == 'y' || concession_choice == 'Y') {
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
    } else {
        discountamount = 0;
        printf("You have chosen not to apply for a fee concession.\n");
    }

    discountprice = coursefee - discountamount;
    return 1; // Indicate that the student is eligible
}
