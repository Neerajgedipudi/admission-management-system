#include "admission_management_system.h"
#include "global.h"
#include <ctype.h> // For isalpha and isdigit functions
#include <string.h> // For strlen function
#include <stdio.h>  // For scanf and printf functions

int is_alpha_string(const char *str) { // This function checks if the name is all characters or not
    while (*str) {
        if (!isalpha(*str) && *str != '\n' && *str != ' ') {
            return 0;
        }
        str++;
    }
    return 1;
}

int is_valid_mobile_number(const char *str) { // This function checks if the mobile number is all integers
    if (strlen(str) != 10) return 0;
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

long long convert_to_long_long(const char *str) {
    long long result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

void clear_input_buffer_alternative() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void student_details() {
    int age;
    char mobile_number[20]; // Buffer to read input (increased size to handle overflow)

    while (1) {
        printf("Enter student Name:\n");
        fgets(student.name, 40, stdin);
        // Remove newline character if present
        student.name[strcspn(student.name, "\n")] = '\0';
        if (is_alpha_string(student.name)) break;
        printf("Invalid input. Name must contain only alphabetic characters.\n");
    }

    while (1) {
        printf("Enter Father Name:\n");
        fgets(student.father_name, 40, stdin);
        // Remove newline character if present
        student.father_name[strcspn(student.father_name, "\n")] = '\0';
        if (is_alpha_string(student.father_name)) break;
        printf("Invalid input. Name must contain only alphabetic characters.\n");
    }

    while (1) {
        printf("Enter your Age:\n");
        if (scanf("%d", &age) == 1) { // Read integer value
            if (age >= 17 && age <= 23) break;
            printf("Invalid age. Age must be between 17 and 23.\n");
        } else {
            printf("Invalid input. Please enter a valid age.\n");
        }
        clear_input_buffer_alternative();
    }

    while (1) {
        printf("Enter student Mobile Number (10 digits only, without +91):\n");
        if (scanf("%19s", mobile_number) == 1) { // Read directly into buffer
            if (strlen(mobile_number) == 10 && is_valid_mobile_number(mobile_number)) {
                student.mobile_number = convert_to_long_long(mobile_number); // Convert to long long
                break;
            }
        }
        printf("Invalid mobile number. It must be 10 digits long and numeric.\n");
        clear_input_buffer_alternative();
    }

    while (1) {
        printf("Enter Father Mobile Number (10 digits only, without +91):\n");
        if (scanf("%19s", mobile_number) == 1) { // Read directly into buffer
            if (strlen(mobile_number) == 10 && is_valid_mobile_number(mobile_number)) {
                student.father_number = convert_to_long_long(mobile_number); // Convert to long long
                break;
            }
        }
        printf("Invalid mobile number. It must be 10 digits long and numeric.\n");
        clear_input_buffer_alternative();
    }

    printf("\nEntered data:\n");
    printf("Student name: %s\n", student.name);
    printf("Father name: %s\n", student.father_name);
    printf("Age of Student: %d\n", age);
    printf("Student Mobile Number: +91%lld\n", student.mobile_number);
    printf("Father Mobile Number: +91%lld\n", student.father_number);
}
