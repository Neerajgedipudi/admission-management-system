
#include"admission_management_system.h"
#include"global.h"

void hostel()//hostel selection
{
    printf("Select the option below for Residential facility \n");
    printf(" Select 1.Two share\n select 2.Four share\n ");
    printf(" Press any key to exit from selection");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        printf("You have selected two share room\nProceeding to bill generation...\n");
        hostelfee+=95000.0;


    }
    else if(option==2)
    {
        printf("you have selected four share option\nProceeding to bill generation...\n");
        hostelfee+=75000.0;
    }
    else
    {
        printf("Above options are not selected , Proceeding to bill generation...\n");
    }




}
