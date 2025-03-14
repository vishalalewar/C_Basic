#include<stdio.h>
#include<string.h>
int revs(char *s,char *s1)
{
	int i,j=0;
	int len=strlen(s1);
	printf("%s,%d\n",s1,len);
	for(i=len-1;i>=0;i--)
	{
		s[j++]=s1[i];
	}
}	

int main()
{
char str[]="vishal";
char str1[20];
printf("%s\n",str);
revs(str1,str);
printf("%s\n",str1);
}
