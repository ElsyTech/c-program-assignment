//C arrays - 3D arrays
/*
Name : ELOSSY MWENDWA SIMON
Reg no : CT101/21429/24
Date : 17/10/2024
*/
#include<stdio.h>
int main (){

	int n,m,p;
	int marks [ 2 ] [2] [3]={{{40,50,60},{80,30,92}},{{40,50,60},{80,30,92}}};

	for(n=0;n<2;n++){
		for(m=0;m<2;m++){
			for(p=0;p<3;p++){

	printf("Marks[%d][%d][%d] = %d \n",n,m,p, marks [n][m][p]);
		}
		}
	}
	return 0;
}
