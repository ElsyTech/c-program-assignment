//Program to calculate fine for library books
/*
Name: ELOSSY MWENDWA SIMON
Reg no: CT101/G/21429/24
Date: 2/10/2024
*/
//Preprocessor directive- scanf() , printf()
#include<stdio.h>
int main()

int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmmount;

printf("Enter bookId:");
scanf("%d",&bookId);

printf("Enter Due Date:");
scanf("%d",&dueDate);

printf("Enter return date:");
scanf("%d",&returnDate);

daysOverdue=returnDate-dueDate;

if(daysOverdue<=0){
        fineRate=0;
        fineAmmount=0;}

  else if(daysOverdue<=7){
        fineRate=20;
        finAmmount=daysOverdue*finerate;
  }
  else if(daysOverdue<=14){
        fineRate=50;
        fineAmmount=daysOverdue*finerate;
  {
      else if(daysOverdue>=15){
            fineRte=100;
             fineAmmount=daysOverdue*finerate;
      }
      printf("Book ID:%d\n",bookID);
      printf("Due Date:%d\n",dueDate);
      printf("returnDate:%d\n",returnDate);
      printf("daysOverdue:%d\n",daysOverdue);
      printf("fineRate:%d\n",fineRate);
      printf("fineAmmount:%d\n",fineAmmount);

      return 0;

  }

