
#include"admission_management_system.h"
#include"global.h"

void bus()//transportation service selection
{
    printf("Select the bus routes\n");
    printf("Available Routes :\n");
    printf("ROUTE:1-Vijayanagra to college(via : Kathirguppe)\n");
    printf("ROUTE:2-Silk Board to college (via  : Banashankari)\n");
    printf("ROUTE:3-White Field to college(via : K.R Market)\n");
    printf("Press any number to exit from selection\n");
    int route;
    printf("select the route number:\n");
    scanf("%d",&route);
    if(route==1)
    {
        printf("You have selected ROUTE:1\n");
        printf("Fee for this route: Rs 12,000.0/-\nProceeding to bill generation...\n");
        travelfee+=12000;

    }
    else if(route==2)
    {
        printf("You have selected ROUTE:2\n");
        printf("Fee for this route: Rs 20,000.0/-\nProceeding to bill generation...\n");
        travelfee+=20000;
    }
    else if(route==3)
    {

        printf("You have selected ROUTE:3\n");
        printf("Fee for this route: Rs 18,000.0/-\nProceeding to bill generation...\n");
        travelfee+=18000;
    }
    else
    {
        printf("Above options are not selected, Proceeding to bill generation...\n");
    }
}
