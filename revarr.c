#include<stdio.h>
int main()
{
	int arr[]={12,23,24,25,26};
	int i,j=0;
	int len=sizeof(arr)/sizeof(int)-1;
	int temp=0;
	int k=0;
	for(i=len;i>=0;i--)
	{
		printf("%d",arr[i]);
		temp=arr[i];
		arr[j++]=temp;
		
	}
	for(k=0;k<=len;k++)
	{
		printf("%d ",arr[k]);
	}
}
