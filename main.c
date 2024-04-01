
// WELCOME TO BASIC ADMISSION MANAGEMENT  SYSTEM

#include<stdio.h>

    float coursefee=0.0;
    float hostelfee=0.0;
    float travelfee=0.0;
    float totalfee=0.0;
    float discountamount=0.0;
    float discountprice=0.0;
void welcome()// printing of welcome message
{
    printf("\tWELCOME TO XYZ ENGINEERING COLLEGE\t\n");
    printf("Please fill the following details for the admission\n");
}
void student_details()//entry of basic details of student
{


struct details
{
    char name[40];
    int age;
    char mobile_number[10];
};

struct details student;

printf("Enter your Name:\n");
fgets(student.name,40,stdin);
printf("Enter your Mobile Number:+91");
fgets(student.mobile_number,11,stdin);
printf("Enter your Age:\n");
scanf("%d",&student.age);


printf("Entered data:\n");
printf("Student name:%s\n",student.name);
printf("Age of Student:%d\n",student.age);
printf("Mobile Number:+91%s\n",student.mobile_number);




}
void branch()//selection of engineering courses by the user
{
    int course;
    printf("Engineering courses available:\n");
    printf("Option 1: ECE\nOption 2: CSE\nOption 3: EEE\nOption 4: MECH\nOption 5: CIVIL\n");
    printf("Enter Course Option:\n");
    scanf("%d",&course);
    if(course==1)
    {
        printf("The selected course is Electronics & Communication Enginnering\n");
        coursefee+=90000;
    }
    else if(course==2)
    {
        printf("The selected course is Computer Science Enginnering\n");
        coursefee+=150000;

    }
    else if(course==3)
    {
        printf("The selected course is Electrical Engineering\n");
        coursefee+=50000;
    }
    else if(course==4)
    {
        printf("The selected course is Mechanical Engineering\n");
        coursefee+=60000;
    }
    else if(course==5)
    {
        printf("The selected course is Civil Engineering\n");
        coursefee+=65000;
    }
    else
    {
        printf("Exited\n");
    }


}
void feeconseesion()//fee discount based on 12th percentage
{
    float percentage;
    printf("enter your PUC percentage:\n");
    scanf("%f",&percentage);
    if(percentage>=90 && percentage <= 100)
    {
        printf("you are eligible to get 25 percent fee consession\n");
        discountamount=coursefee*0.25;
        discountprice=coursefee-discountamount;

    }
    else if(percentage>=80 && percentage <90)
    {
        printf("you are eligible to get 15 percent fee consession\n");
        discountamount=coursefee*0.15;
        discountprice=coursefee-discountamount;

    }
    else if(percentage>=75 && percentage <80)
    {
        printf("you are eligible to get 10 percent fee consession\n");
        discountamount=coursefee*0.10;
        discountprice=coursefee-discountamount;
    }
    else
    {
        printf("you are not eligible to get fee consession\n");
        discountprice=coursefee;
    }

}
void hostel()//hostel selection
{
    printf("Select the option below for Residential facility \n");
    printf(" Select 1.Two share\n select 2.Four share\n ");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        printf("You have selected two share room\n");
        hostelfee+=95000.0;


    }
    else if(option==2)
    {
        printf("you have selected four share option\n");
        hostelfee+=75000.0;
    }
    else
    {
        printf("Exited");
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
        printf("Fee for this route: Rs 12,000.0/-\n");
        travelfee+=12000;

    }
    else if(route==2)
    {
        printf("You have selected ROUTE:2\n");
        printf("Fee for this route: Rs 20,000.0/-\n");
        travelfee+=20000;
    }
    else if(route==3)
    {

        printf("You have selected ROUTE:3\n");
        printf("Fee for this route: Rs 18,000.0/-\n");
        travelfee+=18000;
    }
    else
    {
        printf("EXITED\n");
    }
}
void total_bill()
{
    printf("BILL GEREATION :\n");
    printf("Course Fee:%.2f\n",coursefee);
    printf("Price After Consession:%.2f\n",discountprice);
    printf("Residential Facility Fee:%.2f\n",hostelfee);
    printf("Transport Facility Fee:%.2f\n",travelfee);
    totalfee = discountprice+hostelfee+travelfee;
    printf("Total Fee:%.2f\n",totalfee);


}
int main()
{
    int option;
    welcome();
    student_details();
    printf("------------------------------------\n");
    branch();
    feeconseesion();
    printf("\tSelect the facility:\t\n");
    printf("\t option 1: RESIDENTIAL FACILITY \n\t option 2: TRANSPORT FACILITY\n");
    printf("\t Click any Key to exit and bill generation\t\n");
    printf("Enter your option:");
    scanf("%d",&option);
    if(option==1)
    {
         hostel();
    }
    else if(option==2)
    {
        bus();
    }
    else
    {
        printf("BILL GEREATION :\n");

    }
    printf("----------------------------\n");
    total_bill();

    return 0;
}
