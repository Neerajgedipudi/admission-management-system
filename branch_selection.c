
#include "admission_management_system.h"
#include "global.h"

void branch() {
    int course;
    int valid = 0;

    while (!valid) {
        printf("Engineering courses available:\n");
        printf("Option 1: ECE\nOption 2: CSE\nOption 3: EEE\nOption 4: MECH\nOption 5: CIVIL\n");
        printf("Enter Course Option:\n");
        scanf("%d", &course);

        switch (course) {
            case 1:
                printf("The selected course is Electronics & Communication Engineering\n");
                coursefee += 90000;
                valid = 1;
                break;
            case 2:
                printf("The selected course is Computer Science Engineering\n");
                coursefee += 150000;
                valid = 1;
                break;
            case 3:
                printf("The selected course is Electrical Engineering\n");
                coursefee += 50000;
                valid = 1;
                break;
            case 4:
                printf("The selected course is Mechanical Engineering\n");
                coursefee += 60000;
                valid = 1;
                break;
            case 5:
                printf("The selected course is Civil Engineering\n");
                coursefee += 65000;
                valid = 1;
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }
}
