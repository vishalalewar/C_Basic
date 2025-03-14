#include<stdio.h>

int printPattarn(int n)
{
	int size=(n*2)-1;
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			int min=i<j?i:j;
			min=min<size-i?min:size-i-1;
			min=min<size-j?min:size-j-1;
			printf("%d ",n-min);
		}
		printf("\n");
	}
}
int revArr(int arr[],int size)
{
	int i=0,j;
	int len=size;
	int arr2[size];
	for(j=len;j>=0;j--)
	{
		printf("%d ",arr[j]);
		arr2[i]=arr[j];
		++i;
	}
	printf("\n");
	 for(j=0;j<=len;j++)
        {
                printf("%d ",arr2[j]);
                arr[j]=arr2[j];
                //printf("%d ",arr[j]);
        }
	 printf("\n");
	  for(j=0;j<=len;j++)
        {
                printf("%d ",arr[j]);
                //arr[i]=arr[j];
        }
	return 0;
}


int main()
{
	/*int n;
	scanf("%d",&n);
	printPattarn(n);*/
	int arr1[]={1,2,3,4,5,6};
	//int size=sizeof(*arr1)/sizeof(int);
        int n=5;
	//printf("size=%d",n);
	revArr(arr1,n);
}
