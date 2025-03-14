#include<stdio.h>
void Coun0s1s(int num)
{
	int countZero=0;
	int countOne=0;
	while(num > 0)
	{
	       if(num & 1)
		{
		  countOne++;
		  printf("1");
		}
		else
		{
		  countZero++;
		  printf("0");
		}
		num = num >> 1;
	}
	printf("\n");
	printf("countOne=%d \n",countOne);
	printf("countZero=%d \n",countZero);
}
                
int main()
{
	int N;
	printf("Enter number to find 0s an 1s:");
	scanf("%d",&N);

	Coun0s1s(N);
}


