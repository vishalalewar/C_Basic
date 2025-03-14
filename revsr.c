#include <stdio.h>
#include<string.h>
int revs(char *s2,char *s1)
{
	int i=0,j;
	int len;
	for(j=strlen(s1)-1;j>=0;j--)
	{
	//	printf("%c",*(s1+j));
		*(s2+i)=*(s1+j);
		i++;
	}
	printf("\n");
	return 0;
}
int main() {
	char str1[100]="welcome";
	char str2[100];
	printf("%s\n",str1);
	revs(str2,str1);
	printf("%s",str2);
	return 0;
}
