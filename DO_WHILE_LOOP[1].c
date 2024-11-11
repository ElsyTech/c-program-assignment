//do while loop
/*
Name : ELOSSY MWENDWA SIMON
Reg no : CT101/G/21429/24
Date : 8/10/2024
*/
//preprocessor directive - scanf ()  ,printf ()
#include<stdio.h>

int main (){
	int start , sum=0 , stop;
	printf("Enter a value for when to start");
	scanf("%d",&start);

	printf("Enter a value for when to stop");
	scanf("%d",&stop);
	do{
		printf("%d\n",start);
		start++;
		sum+=start;
}
        while(start<=stop);
        printf("The sum is %d",sum);

        return 0;
}
