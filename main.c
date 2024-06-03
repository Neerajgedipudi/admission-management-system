#include<stdio.h>
#include"admission_management_system.h"
#include"global.h"
#include"student.c"
#include"branch_selection.c"
#include"fee_discount.c"
#include"hostel_selection.c"
#include"bus_selection.c"
#include"totalbill.c"




int main()
{
    int option;
    printf("\tWELCOME TO XYZ ENGINEERING COLLEGE\t\n");
    printf("Please fill the following details for the admission\n");
    student_details();
    printf("------------------------------------------\n");
    branch();
    feeconseesion();
    printf("\tSelect the Facility:\t\n");
    printf("\t option 1: RESIDENTIAL FACILITY \n\t option 2: TRANSPORT FACILITY\n");
    printf("\t Click any Key to exit and bill generation\t\n");
    printf("Enter your option:");
    scanf("%d",&option);
    if(option==1)//selection of residential and transport facility
    {
         hostel();//residential facility function
    }
    else if(option==2)
    {
        bus();//transport facility function
    }
    else
    {
         printf("No valid option selected. Proceeding to bill generation...\n");
    }
    printf("--------------------------------------------\n");
    total_bill();//billing function

    return 0;
}
