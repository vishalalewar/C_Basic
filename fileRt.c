#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[] )
{
        FILE *p;
	int ch;
	if((p=fopen(argv[1],"r"))==NULL)
	{
		printf("Error in file opening:\n");
		exit(1);
	}
	
	while((ch=fgetc(p))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p);
	return 0;
}
