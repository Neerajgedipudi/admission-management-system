#include"admission_management_system.h"
#include"global.h"

void total_bill()
{
    printf("BILL GENEREATION :\n");
    printf("\n");
    printf("Course Fee:%.2f\n",coursefee);
    printf("Price After Consession:%.2f\n",discountprice);
    printf("Residential Facility Fee:%.2f\n",hostelfee);
    printf("Transport Facility Fee:%.2f\n",travelfee);
    totalfee = discountprice+hostelfee+travelfee;
    printf("Total Fee:%.2f\n",totalfee);

    bill=fopen("billin.txt","w");// File handling write function is initiated

    fprintf(bill,"\t XYZ ENGINEERING COLLEGE \n");
    fprintf(bill,"\n");
    fprintf(bill,"\n");
    fprintf(bill,"Name of the Student  : %s\n",student.name);
    fprintf(bill,"Name of the Father   : %s\n",student.father_name);
    fprintf(bill,"\n");
    fprintf(bill,"Student Mobile Number:%lld\n",student.mobile_number);
    fprintf(bill,"\n");
    fprintf(bill,"Course Fee               :%.2f\n",coursefee);

    fprintf(bill,"Fee After Consession     :%.2f\n",discountprice);

    fprintf(bill,"Residential Facility Fee :%.2f\n",hostelfee);

    fprintf(bill,"Transport Facility Fee   :%.2f\n",travelfee);

    fprintf(bill,"Total Fee                :%.2f\n",totalfee);

    fclose(bill);


}
