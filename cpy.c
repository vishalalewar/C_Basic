#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *source, *dest;
	int ch;

	if(argc!=3)
	{
		printf("wrong number of arguments");
		exit(1);
	}
	if((source=fopen(argv[1],"r"))==NULL)
	{
		printf("Error in file openenig\n");
		exit(1);
	}
	if((dest=fopen(argv[2],"w"))==NULL)
	{
		printf("Error in file opening:\n");
		exit(1);
	}
	while((ch=fgetc(source))!=EOF)
	{
		fputc(ch,dest);
	}
	fclose(source);
	fclose(dest);
	return 0;
}
