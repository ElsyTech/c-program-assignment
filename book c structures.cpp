//c structures
/*
Name:ELOSSY SIMON
Reg no:CT101/G/21429/24
*/
#include<stdio.h>//scanf(),printf()
#include<string.h>//strcpy()
struct book{
	int publicationyear;
	float price;
	char title[30];
	char author[30];
	char ISBN[13];
}book;

int main(){
	//struct book
	strcpy(book.title,"Introduction to C Programming");
	strcpy(book.author,"John Smith");
	book.publicationyear=2022;
	book.price=49.99;
	strcpy(book.ISBN,"97801311030627");
	
	
	printf("publicationyear:%d\n",book.publicationyear);
	printf("price:%f\n",book.price);
	printf("title:%s\n",book.title);
	printf("author:%s\n",book.author);
	printf("ISBN:%s\n",book.ISBN);
	
	return 0;
}