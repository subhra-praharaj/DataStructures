#include<stdio.h>
int main()
{
	int dis[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter value [%d][%d]:",i,j);
			scanf("%d",&dis[i][j]);
		}
	}
	printf("matrix elements:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",dis[i][j]);
			if(j==4)
			{
				printf("\n");
			}
		}
	}
	return 0;
}