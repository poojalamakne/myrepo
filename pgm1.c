#include<stdio.h>
int mmaxin()
{
	int maxrr[mmaxxsize][mmaxxsize],l,i,k,j,row,col,res[10][10];
	scmaxnf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scmaxnf("%d",&maxrr[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		
		for(j=0;j<col;j++)
		{
			l=0;
			for(k=row-1;k>=0;k--)
			{
				res[j][l]=maxrr[k][j];
				l++;
			}
		}
	}

	printf("\nOutput:- \n");	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",res[i][j]);
		}
		printf("\n");
	}
	return 0;


}
