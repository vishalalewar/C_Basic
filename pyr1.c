#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	char num1='*';
	int num=0;
	printf("enter number of rows:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("\n");
	for(j=i;j<=n;j++)
	{
		printf("%c",'*');
	}
	}
	printf("\n");
	
}
