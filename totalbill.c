#include"admission_management_system.h"
#include"global.h"

void total_bill()
{
    printf("BILL GEREATION :\n");
    printf("Course Fee:%.2f\n",coursefee);
    printf("Price After Consession:%.2f\n",discountprice);
    printf("Residential Facility Fee:%.2f\n",hostelfee);
    printf("Transport Facility Fee:%.2f\n",travelfee);
    totalfee = discountprice+hostelfee+travelfee;
    printf("Total Fee:%.2f\n",totalfee);
    bill=fopen("billin.txt","w");
    fprintf(bill,"Course Fee:              %.2f\n",coursefee);
    fprintf(bill,"Fee After Consession:    %.2f\n",discountprice);
    fprintf(bill,"Residential Facility Fee:%.2f\n",hostelfee);
    fprintf(bill,"Transport Facility Fee:  %.2f\n",travelfee);
    fprintf(bill,"Total Fee:               %.2f\n",totalfee);
    fclose(bill);


}