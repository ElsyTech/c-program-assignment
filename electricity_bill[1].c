// calculate electricity bill
/*
Name: ELOSSY MWENDWA SIMON
Reg no:CT101/G/21429/24
*/
//Preprocessor directive - scanf(),printf()
#include<stdio.h>
int main () {
    char customerName;
    int customerID;
    float unitsConsumed;

    printf("Enter CustomerID:");
    scanf("%d",&customerID);
    printf("Enter CustomerName:");
    scanf("%c",&customerName);
    printf("Enter Units Consumed:");
    scanf("%f",&unitsConsumed);


    if units_consumed <= 199:
        charge_per_unit = 1.20
    elif units_consumed < 400:
        charge_per_unit = 1.50
    elif units_consumed < 600:
        charge_per_unit = 1.80
    else:
        charge_per_unit = 2.00


    total_bill = unitsConsumed * charge_per_unit

     if total bill exceeds Kshs. 400
    if total_bill > 400:
        surcharge = 0.15 * total_bill
        total_bill += surcharge

     minimum bill is Kshs. 100
    if total_bill < 100:
        total_bill = 100



    printf("CustomerID%d\n",customerID);
    printf("Customer Name%C\n",customerName);
    print(f"Units Consumed%f\n",unitsConsumed);
    printf("Charges per Unit%d\n",charges per unit);
    print(f"Total Amount to Pay%f\n"total amount to pay);


     return 0;

     }
