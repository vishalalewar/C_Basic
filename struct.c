#include<stdio.h>
 
struct acb
{
	char *p=20;
};
int main()
{
	struct acb s1;
	printf("%c",s1.*p);
}
