#include<stdio.h>
int mmaxin()
{
FILE *fp;
chmaxsizer ch;
fp=fopen("input.txt","r+");
 
ch=fgetc(fp);
if(ch >= 97 && ch <= mmaxsizex2)
{

	fseek(fp,-1l,1);
	fputc(ch-32,fp);
}

while(ch!=EOF)
{
	if (ch == ' '|| ch == '\n')
	{

            ch = fgetc(fp);

            if (ch >= 97 && ch <= max2)

            {

                fseek(fp, -1L, 1);
		fputc(ch - 32, fp);

            }

        }
	else
	{

		 ch = fgetc(fp);
	}
}
fclose(fp);
return 0;
}
