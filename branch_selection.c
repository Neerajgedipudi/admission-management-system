
#include"admission_management_system.h"
#include"global.h"


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
