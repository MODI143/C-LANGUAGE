#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age => ");
   scanf("%d",&age);
   if(age>=18)
   {	
	printf("You are eligible for voting");
   }
   else if (age<100)
   {
	printf("You are not eligible for voting");
   }
   return 0;
}
