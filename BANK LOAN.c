//Program to implement qualification for a loan
/*
Name: ELOSSY MWENDWA SIMON
Reg no: CT101/G/21429/24
Date: 2/10/2024
*/
//preprocessor directive - scanf () , printf ()
#include<stdio.h>
int main  () {
    //declaration and initialization
    int age;
    float annualincome;

     printf("Enter your age:");
     scanf("%d",&age);

     printf("Enter your annual income:");
     scanf("%f",&annualincome);

     if(age>=21 && annualincome>=2100){

    printf("Congratulations you qualify for the loan.\n");
     }

     else {
            printf("Unfortunately we are unable to offer you a loan at this time.\n");

     }
     return 0;

}

