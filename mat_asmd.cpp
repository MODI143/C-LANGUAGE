#include<stdio.h>
main()
{
	int i,j,a[3][3],b[3][3],sum[i][j],sub[i][j],mul[i][j],div[i][j];
	
	printf("ENTER THE VALUE OF MATRIX A =>\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("ENTER THE VALUE OF MATRIX B =>\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		printf("OUR MATRIX A IS =>\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("OUR MATRIX B IS =>\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
		printf("ADDITION OF MATRIX A & B => \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	printf("SUBSTRACTION OF MATRIX A & B => \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d \t",sub[i][j]);
		}
		printf("\n");
	}
	printf("MULTIPLICATION OF MATRIX A & B => \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			mul[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d \t",mul[i][j]);
		}
		printf("\n");
	}
	
	printf("DIVISION OF MATRIX A & B => \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			div[i][j]=a[i][j]/b[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d \t",div[i][j]);
		}
		printf("\n");
	}
}
