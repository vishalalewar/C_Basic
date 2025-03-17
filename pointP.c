#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int *p;
	int value;
	char *str;
	char s[10];

        printf("Enter value:");
	scanf("%d",&value);
	p=&value;
         printf("Enter Str:");
	  scanf("%s",s);
//	str=malloc(sizeof(s));
	  str=s;
	printf("vaule=%d\n",value);
	printf("*p=%d\n",*p);
	printf("p=%ld\n",p);
	printf("s=%s\n",s);
	printf("str=%s\n",str);
	printf("*str=%d\n",str);



       // printf("Value=%d *p=%d p=%ls str=%s ,s=%s,*str=%d",value,(int *)*p,p,str,s,*str);

//	free(str);
	
	return 0;
}

