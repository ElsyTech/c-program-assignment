//Program to find compound interest
/*
Author : Elossy Mwendwa Simon Elsy Tech
Reg no : CT101/G/21429/24
Date : 25/09/2024
*/
//preprocessor directive - scanf () ,printf ()
#include<stdio.h>
int main () {
	//find compound interest
	int A ;
	int p ;
	int r ;
	int n ;
	int t ;
	float compoundinterest ;
	
	printf ("Enter final amount;");
	scanf ("%d",&A);
	printf("The final amount is %d \n",A);
	
	printf ("Enter principal amount;");
	scanf ("%d",&p);
	printf ("The principal amount is %d \n",p);
	
	printf ("Enter rate in %;");
	scanf ("%d",&r);
	printf ("The rate in % is %d \n",r);
	
	printf ("Enter number of years;");
	scanf ("%d",&n);
	printf ("The number of compounding years is %d \n",n);
	
	printf ("Enter total number of years;");
	printf ("%d",&t);
	scanf ("The total number of years is %d \n",t);
	
compoundinterestformula :A=p*(1+r/n)^(n*t);
	
printf ("The compoundinterest is %f \n",compoundinterest);
	
	return 0;
}