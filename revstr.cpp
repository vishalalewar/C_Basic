#include<iostream>
#include<cstring>
int rev(char *str,int n,int e)
{
for(int k=n;k>=e;k--)
{
       printf("%c",str[k]);

}
return 0;
}
int main()
{
 char s[]="my name is vishal alewar i am from hingoli";
 char s1[200];
int j=0;
for(int i=strlen(s)-1;i>=0;i--)
{
	s1[j++]=s[i];
}

for(int i=0;i<=strlen(s1);i++)
{
	//printf("%c",s1[i]);

	if(s1[i]==' ' || s1[i]=='\0')
	{
		int m=0;
		static int e;
		m=i;
	rev(s1,m,e);
	e=i;
	
	}
//	break;
}

}
