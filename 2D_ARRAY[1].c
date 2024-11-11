//C arrays - 2D arrays
/*
Name: ELOSSY MWENDWA SIMON
Reg no : CT101/21429/24
Date : 17/10/2024
*/
#include<stdio.h>
int main (){

	int n,m;
	int marks [ 2 ] [3]={{40,50,60},{80,30,92}};

	for(n=0;n<2;n++){
		for(m=0;m<3 ;m++){

	printf("Marks[%d][%d]=%d\n",n,m,marks [n][m]);
		}
}
	return 0;
}
