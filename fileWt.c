#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *p;
	int ch;
	if((p=fopen(argv[1],"w"))==NULL)
	{
		printf("Error in file writing:\n");
		exit(1);
	}
	printf("Enter text:\n");

	while((ch=getchar())!=EOF)
	{
		fputc(ch,p);
	}
	fclose(p);
	return 0;
}
