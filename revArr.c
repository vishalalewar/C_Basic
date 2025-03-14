#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int i=0,j=0;
	int temp[20];

	int len=sizeof(arr)/sizeof(int);
	for(i=len-1;i>=0;i--)
	{
		printf("%d",arr[i]);
		temp[j++]=arr[i];
		
	}
        printf("Reverse arr:\n");
	for(i=0;i<=len-1;i++)
	{
		arr[i]=temp[i];
		printf("%d",arr[i]);
	}
}

