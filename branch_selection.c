#include <stdio.h>
#include <stdlib.h> // For exit()
#include "admission_management_system.h"
#include "global.h"

// Assuming coursefee is declared and initialized properly in global.h or a source file

void branch() {
    int course;// selection of option
    int valid = 0;
    int input_status;// checks for valid input or not (helps to stop infinite loop)

// FEE structure to respective branches
    const int ECE_FEE = 175000;
    const int CSE_FEE = 250000;
    const int EEE_FEE = 100000;
    const int MECH_FEE = 100000;
    const int CIVIL_FEE = 105000;

    while (!valid) {
        printf("Engineering courses available:\n");
        printf("Option 1: ECE\nOption 2: CSE\nOption 3: EEE\nOption 4: MECH\nOption 5: CIVIL\n");
        printf("Enter Course Option:\n");

        input_status = scanf("%d", &course);

        // Check if scanf successfully read an integer
        if (input_status != 1) {
            // Handle invalid input
            printf("Invalid input. Please enter a number.\n");
            // Clear the invalid input from stdin
            while (getchar() != '\n');
            continue; // Continue to prompt for input
        }

        // Check the valid range for course options
        switch (course) {
            case 1:
                printf("The selected course is Electronics & Communication Engineering\n");
                coursefee += ECE_FEE;
                valid = 1;
                break;
            case 2:
                printf("The selected course is Computer Science Engineering\n");
                coursefee += CSE_FEE;
                valid = 1;
                break;
            case 3:
                printf("The selected course is Electrical Engineering\n");
                coursefee += EEE_FEE;
                valid = 1;
                break;
            case 4:
                printf("The selected course is Mechanical Engineering\n");
                coursefee += MECH_FEE;
                valid = 1;
                break;
            case 5:
                printf("The selected course is Civil Engineering\n");
                coursefee += CIVIL_FEE;
                valid = 1;
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }
}
