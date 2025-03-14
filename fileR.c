#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *p;
	int ch;
	if((p=fopen("myfile","r"))==NULL)
	 {
	 printf("Error in opening file\n");
	 exit(1);
	 }
     while((ch=fgetc(p))!=EOF)
	     printf("%c",ch);
     fclose(p);
     return 0;
}

