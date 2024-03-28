// WELCOME TO BASIC ADMISSION MANAGEMENT  SYSTEM

#include<stdio.h>
void welcome()// printing of welcome message
{
    printf("\tWELCOME TO KINGSTON ENGINEERING COLLEGE\t\n");
    printf("\tPlease fill the following details for the admission\t\n");
}
void student_details()//entry of basic details of student
{




    char studentname[50];
    int age;
    printf("enter your name:\n");
    fgets(studentname,50,stdin);
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Entered data:\n Name:%s Age:%d\n",studentname,age);



}
void branch()//selection of engineering courses by the user
{
    char branch[10];
    printf("Engineering courses available:\n");
    printf(" ECE\n CSE\n AIML\n EEE\n MECH\n CIVIL\n");
    printf("Select the branch:");
    scanf("%s",&branch);
    printf("The selected course: %s\n",branch);


}
void feeconseesion()//fee discount based on 12th percentage
{
    float percentage;
    printf("enter your PUC percentage:\n");
    scanf("%f",&percentage);
    if(percentage>=90 && percentage <= 100)
    {
        printf("you are eligible to get 25 percent fee consession\n");
    }
    else if(percentage>=80 && percentage <90)
    {
        printf("you are eligible to get 15 percent fee consession\n");

    }
    else if(percentage>=75 && percentage <80)
    {
        printf("you are eligible to get 10 percent fee consession\n");
    }
    else
    {
        printf("you are not eligible to get fee consession\n");
    }

}
void hostel()//hostel selection
{
    //printf("")
    printf("Select the option below for Residential facility \n");
    printf(" Select 1.Two share\n select 2.Four share\n ");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        printf("You have selected two share room\n");
    }
    else
    {
        printf("you have selected four share option\n");
    }




}
void bus()//transportation service selection
{
    printf("Select the bus routes\n");
    printf("Available Routes :\n");
    printf("ROUTE:1-Vijayanagra to college(via : Kathirguppe)\n");
    printf("ROUTE:2-Silk Board to college(via : Banashankari)\n");
    printf("ROUTE:3-White Field to college(via : K.R Market)\n");
    printf("Press any number to exit");
    int route;
    printf("select the route number:\n");
    scanf("%d",&route);
    if(route==1)
    {
        printf("You have selected ROUTE:1\n");
        printf("Fee for this route: Rs 12,000/-");

    }
    else if(route==2)
    {
        printf("You have selected ROUTE:2\n");
        printf("Fee for this route: Rs 20,000/-");
    }
    else if(route==3)
    {
        printf("You have selected ROUTE:3\n");
        printf("Fee for this route: Rs 18,000/-");
    }
    else
    {
        printf("EXITED\n");
    }
}/*
void total_bill()
{


}*/
int main()
{
    int facility;
    welcome();
    student_details();
    printf("------------------------------------\n");
    branch();
    feeconseesion();
    printf("\tSelect the facility:\t\n");
    printf("\t option 1: RESIDENTIAL FACILITY \n\t option 2:BUS Facility\n");
    printf("\t Click any Key to exit and bill generation\t\n");
    printf("Enter your option:");
    scanf("%d",&facility);
    if(facility==1)
    {
         hostel();
    }
    else if(facility==2)
    {
        bus();
    }
    else
    {
        printf("BILL GEREATION :\n");
    }

    return 0;
}
