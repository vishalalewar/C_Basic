#include<stdio.h>
#include<stdlib.h>

typedef struct Books
{
	char tital[50];
        char auther[50];
	char subject[100];
	int bookId;
};

int main()
{
	struct Books book;
	int n
	printf("**********Enter book details******\n");
	printf("Enter book name:");
        scanf("%s",book.tital);
	printf("Enter Book auther:");
        scanf("%s",book.auther);
	printf("Enter book subject:");
	scanf("%s",book.subject);
	printf("Enter book_ID:");
	scanf("%d",&book.bookId);
	printf("****output***********\n");

	printf("Book Name:%s\nBook auther:%s\nBook subject:%s\nBook ID :%d\n",book.tital,book.auther,book.subject,book.bookId);

}



