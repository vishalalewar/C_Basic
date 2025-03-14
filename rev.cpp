#include<stdio.h>
#include<string.h>
int rev(char s1[],char s2[])
{
	int i,j;
	char temp;
	printf("in fu =%s\n",s1);
	int len=0;
	while(s1[len]!='\0')
		len++;
	printf("len=%d \n",len);

	for(i=0,j=len-1;j>=0;j--,i++)
	{
		s2[i]=s1[j];
		//temp=s1[i];
		//s1[i]=s1[j];
		//s1[j]=temp;
	}
	printf("rev str in fun : %s\n",s2);
}
int main()
{
	char str[10]="vishaly";
	char str1[10];
	rev(str,str1);
	printf("rev str=%s",str1);
}

