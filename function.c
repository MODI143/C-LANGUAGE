#include<stdio.h>
void sum();
void sum()
{
	int a,b,c;
	
	printf("ENTER THE VALUE OF A => ");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF B => ");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\n THE VALUE OF C => %d",c);
}

	int main()
	
	{
		sum();
		return 0;
	}
