#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=1;i<=10;i++)
	{	
	for(j=1;j<=30;j++)
	printf("%3d ",num*j*i);
	printf("\n");
	}
}
