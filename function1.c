#include<stdio.h>
int sum(int,int);

int sum(int a,int b)
{
	return a+b;

}
void main()
{
	int a,b,c;
	
	printf("\n ENTER THE VALUE OF A => ");
	scanf("%d",&a);
	
	printf("\n ENTER THE VALUE OF B => ");
	scanf("%d",&b);
	
	c=sum(a,b);
	
	printf("\n C IS => %d",c);
	
}
