#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={1,2,3,4,0,3,0,0,8,7};
	int i,j=0;
	int arr1[20];
	int len=sizeof(arr)/sizeof(int);
        int count=0;
	for(i=0;i<len;i++)
	{
		//for(j=0;j<len;j++)
		if(arr[i]==0)
		{
			//arr[count}=arr[i++];
			count++;
		}
	        else
		{arr1[j++]=arr[i];}
                   
         }

	for(i=0;i<count;i++)
	{
		arr[i]=0;
	
	}
         j=0;
         for(i=count;i<len;i++)
         {
		 arr[i]=arr1[j++];
	 }

for(i=0;i<len;i++)
{
	printf("%d",arr[i]);
}
printf("\n");
return 0;
}

