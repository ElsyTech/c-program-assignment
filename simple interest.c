//Program to calculate simple interest
/*
Author : Elossy Mwendwa Simon
Reg no : CT101/G/21429/24
Date : 24/09/2024
*/
//Preprocesser directive - scanf () , printf ()
#include<stdio.h>
int main () {
	//calculate simple interest(p*t*r/100)
	int p;
	int t;
	int r;
	double simpleinterest ;
	
	printf("Enter principal amount;");
	scanf("%d",&p);
	printf("The principal amount is %d \n",p);
	
	printf("Enter time(annually);");
	scanf("%d",&t);
	printf("The time (annually) is %d \n",t);
	
	printf("Enter rate in %;");
	scanf("%d",&r);
	printf("The rate in % is %d \n",r);
	
	simpleinterest=(p*t*r)/100;
printf("The simpleinterest is %d\n",simpleinterest);

return 0;
}