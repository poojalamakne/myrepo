#include<stdio.h>
int main()
{

FILE *fp;
int i;
char c;
int count=0;

fp=fopen("input.txt","r");





for(c= getc(fp);c != EOF;c= getc(fp))
{

	if(c=='\n')
	{

		count=count+1;
	}
}

printf("no of lines in file:%d",count);
return 0;
}
