#include<stdio.h>
void student()
{
    char studentname[50];
    printf("enter the student name:\n");
    scanf("%s",&studentname);
    printf("The name of the student name is :%s\n",studentname);
}
void branch()
{
    char branch[10];
    printf("Engineering courses available:\n");
    printf("ECE\n CSE\n AIML\n EEE\n MECH\n CIVIL\n");
    printf("Select the branch:");
    scanf("%s",&branch);
    printf("The selected course: %s\n",branch);


}
void feeconseesion()
{
    float percentage;
    printf("enter your PUC percentage:\n");
    scanf("%f",&percentage);
    if(percentage>=90 && percentage <= 100)
    {
        printf("you are eligible to get 25% fee consesssion");
    }
    else if(percentage>=80 && percentage <90)
    {
        printf("you are eligible to get 15% fee consession");

    }
    else if(percentage>=75 && percentage <80)
    {
        printf("you are eligible to get 10% fee consession");
    }
    else
    {
        printf("you are not eligible to get fee consession");
    }

}/*
void hostel()
{


}
void bus()
{

}
void bill()
{

}*/
int main()
{
    student();
    branch();
    feeconseesion();
    return 0;
}
