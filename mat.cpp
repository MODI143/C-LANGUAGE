#include<stdio.h>
int main()
{
	int i,j,a[2][2],b[2][2],sum[i][j];
	
	printf(" ENTER THE VALUE OF MATRIX A =>\n");
	
	for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER THE VALUE OF MATRIX B => \n");
	
		for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("OUR MATRIX A IS :\n");
		for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d \t",a[i][j]);
		}
			printf("\n");
	}
	printf("OUR MATRIX B IS :\n");
		for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d \t",b[i][j]);
		}
			printf("\n");
	}
	printf("SUM OF MATRIX=>\n");
	for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{ 
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("%d \t",sum[i][j]);
			
			}
			printf("\n");
	}
}
