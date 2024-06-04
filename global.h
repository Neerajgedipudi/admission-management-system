#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED


#include<stdio.h>
    FILE *bill;
    struct details
    {
        char name[40];
        char father_name[40];
        long long father_number;
        long long mobile_number;


    };
     struct details student;
     int day, month, year;
    float percentage;
    float tenth_percentage;
    float coursefee=0.0;
    float hostelfee=0.0;
    float travelfee=0.0;
    float totalfee=0.0;
    float discountamount=0.0;
    float discountprice=0.0;

#endif
