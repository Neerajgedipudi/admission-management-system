#include <stdio.h>
#include "admission_management_system.h"
#include "global.h"
#include "student.c"
#include "branch_selection.c"
#include "fee_discount.c"
#include "hostel_selection.c"
#include "bus_selection.c"
#include "totalbill.c" // bill 
#include "buffer.c" // clearing the new line 

int main()
{
    int option;

    while (1) {
        printf("\tWELCOME TO XYZ ENGINEERING COLLEGE\t\n");
        printf("Please fill the following details for the admission\n");
        
        student_details(); // Collect student details
        
        printf("------------------------------------------\n");
        
        branch(); // Select branch
        
        // Call fee concession function and check eligibility
        if (!feeconseesion()) {
            printf("Admission process terminated for this student. Proceeding to the next admission.\n");
            clear_input_buffer();
            continue; // Skip to the next iteration for the next admission
        }
        
        // selection of facility
        printf("\tSelect the Facility:\t\n");
        printf("\t option 1: RESIDENTIAL FACILITY \n\t option 2: TRANSPORT FACILITY\n");
        printf("\t Click any Key to bill generation if above facility is not required\t\n");
        printf("Enter your option:");
        
        // Clear input buffer before reading new input
        clear_input_buffer();
        scanf("%d", &option);

        if (option == 1) {
            hostel(); // Residential facility function
        } else if (option == 2) {
            bus(); // Transport facility function
        } else {
            printf("Proceeding to bill generation...\n");
        }
        
        printf("--------------------------------------------\n");
        
        total_bill(); // Billing function

        printf("Admission is successful!\n");
        printf("Thank you for choosing XYZ Engineering College!\n");
        
        // Clear input buffer for next admission
        clear_input_buffer();
        printf("\n");
    }

    return 0; // This will never end
}
