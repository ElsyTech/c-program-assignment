//while loop  - output numbers  1-50
/*
Name : ELossy mwendwa simon
Reg no : CT101/G/21429/24
*/
//preprocessor directive - scanf (),printf ()
#include<stdio.h>
int main (){

	int start, sum=0, stop;
	printf("Enter a value for when to start");
	scanf("%d",&start);

	printf("Enter a value for when to stop");
	scanf("%d",&stop);

	while(start<stop){

         printf("%d\n",start);
         start++;
		sum=sum+start;
		sum+=start;
		}

		printf("The sum is %d", sum);
		return 0;
}
