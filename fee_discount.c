#include"admission_management_system.h"
#include"global.h"


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
