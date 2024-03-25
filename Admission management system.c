#include<stdio.h>
void welcome()// welcome messege
{
    printf("\tWELCOME TO KINGSTON ENGINEERING COLLEGE\t\n");
    printf("Please fill the following details for the admission\n");
}
void student()//basic details of student
{
    char studentname[50];
    printf("enter the student name:\n");
    scanf("%s",&studentname);
    printf("Input given is :%s\n",studentname);
}
void branch()//selection of engineering courses
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
        printf("you are eligible to get 25 percent fee consesssion");
    }
    else if(percentage>=80 && percentage <90)
    {
        printf("you are eligible to get 15 percent fee consession");

    }
    else if(percentage>=75 && percentage <80)
    {
        printf("you are eligible to get 10 percent fee consession");
    }
    else
    {
        printf("you are not eligible to get fee consession\n");
    }

}
void hostel()//hostel selection
{
    //printf("")
    printf("Select the option below for HOSTEL if needed\n");
    printf(" Select 1.Two share\n select 2.Four share\n select 3.EXIT \n");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        printf("You have selected two share room\n");
    }
    else if(option==2)
    {
        printf("you have selected four share option\n");
    }
    else if(option==3)
    {
        printf("EXIT\n");
    }
    else{
        printf("Error\n");
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

    }
    else if(route==2)
    {
        printf("You have selected ROUTE:2\n");
    }
    else if(route==3)
    {
        printf("You have selected ROUTE:3\n");
    }
    else
    {
        printf("EXIT");
    }
}
/*void bill()
{
    printf("The fee generated");
    printf("")

}*/
int main()
{
    welcome();
    student();
    branch();
    feeconseesion();
    hostel();
    bus();
    return 0;
}
