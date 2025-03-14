#include<stdio.h>
int main()
{
	int arr[4]={1,2,3,2};
	int i,j,k;
	int n=3;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(arr[i]==arr[j]&&(i=!j))
			{
                        printf("arr[]==arr[]%d==%d\n",arr[i],arr[j]);
				arr[i]=arr[i+1];
			  n--;
			   
			}
		}
	}

	for(i=0;i<=n;i)
	{
		printf("arr[]=%d,i=%d\n",arr[i],i);
	}
}
