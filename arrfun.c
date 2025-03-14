#include<stdio.h>
int arrfun(int arr[],int num)
{
	int i;
	arr[num]={10,20,30};
	for(i=0;i<=num;i++)
	{
         printf("num=%d",arr[num]);
	}


}
int main()
{
 int arr[10];
 int n;
 arrfun(arr[n],n);
}
