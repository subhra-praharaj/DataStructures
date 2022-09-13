#include<stdio.h>
int main()
{
	int a[5][5];
	int size=0;
	int i,j,k=0;
	int b[size][3];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter value [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
			if(j==4)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=0)
			{
				size++;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	printf("\n3 tuple representation:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}