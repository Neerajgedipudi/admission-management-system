
#include"admission_management_system.h"
#include"global.h"

void student_details()
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



printf("Enter your Age:\n");
scanf("%d",&student.age);

printf("Enter your Mobile Number:+91");
scanf("%s",student.mobile_number);



printf("Entered data:\n");
printf("Student name:%s\n",student.name);
printf("Age of Student:%d\n",student.age);
printf("Mobile Number:+91%s\n",student.mobile_number);




}
