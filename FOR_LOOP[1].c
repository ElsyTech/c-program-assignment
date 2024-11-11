//for loop
/*
Name : ELOSSY MWENDWA SIMON
Reg no : CT101/G/21429/24
Date : 8/10/2024
*/
//preprocessor directive
#include<stdio.h> // scanf() ,printf()
int main() {
	int start , sum=0 , stop;
	      printf("Enter a value for when to start");
	      scanf("%d",&start);

	      printf("Enter a value when to stop");
	      scanf("%d",&stop);

	for(start=1;start<=stop;start++);

{
	printf("%d \n",start);

	sum=sum+start;

}

	printf("The sum is %d \n",sum);

	return 0;

}
