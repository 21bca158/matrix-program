/*write a program to enter three by three matrix and check it is diagonal or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],i,j,m;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter a value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
		if(i!=j && m1[i][j]!=0)
		{
			m=1;
		}

	    }
	}
	    if(m==1)
		printf("\nMatrix is not diagonal");
	    else
		printf("\nMatrix is diagonal");

	getch();
}
