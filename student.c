
#include "admission_management_system.h"
#include "global.h"

void student_details()
{
    int age;


    printf("Enter student Name:\n");
    fgets(student.name, 40, stdin);

    printf("Enter Father Name:\n");
    fgets(student.father_name, 40, stdin);


    printf("Enter your Age:\n");
    scanf("%d", &age);

    printf("Enter student Mobile Number (without +91):\n");
    scanf("%lld", &student.mobile_number); // Use %lld to read a long long integer

     printf("Enter Father Mobile Number (without +91):\n");
    scanf("%lld", &student.father_number);
    printf("\n");
    printf("Entered data:\n");
    printf("Student name: %s", student.name);  // No need for newline since fgets includes it
    printf("Father name: %s", student.father_name);
    printf("Age of Student: %d\n",age);
    printf("Student Mobile Number: +91%lld\n", student.mobile_number);
    printf("Father Mobile Number : +91%lld\n", student.father_number);
}



