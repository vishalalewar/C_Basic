#include <stdio.h>

int primfun(int num)
{
	int i ,flag=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i!=0)
		{
		flag=1;
		return 1;
		}
		else {
			flag=0;
		       return 0;	
		    }

	}
/*	for(i=2;i<=num;i++)
	{
		if(flag==1)
		{
			printf("%d",i);
		}
	}
}*/
}
int main()
{
	int n=10;
	int i;
	for(i=2;i<=n;i++)
	{
		if(primfun(i))
		{
			printf("%d\n",i);
		}
        }
}

