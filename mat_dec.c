#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int *ptr,i;
	
	ptr=&a[2];
	
	printf("ADDRESS OF PTR++ => %d \n",ptr++);
	
	printf("VALUE OF *(ptr+1)=> %d AND ADDRESS => %u \n",*(ptr+1),(ptr+1));
	
    printf("VALUE OF *(ptr+1)=> %d AND ADDRESS => %u \n",*(ptr-1),(ptr-1));
    for(i=0;i<5;i++)
    {
    	printf("ADDRESS OF ptr[%d]=%u\n",i,ptr++);
	}
	printf("ENTER THE VALUE OF ARRAY \n ");
	for (i=0;i<=4;i++)
	{
		scanf("%d",(a+i));  // (a+i) == a[i]
	}
	for (i=0;i<=4;i++)
	{
		printf("%d \n",*(a+i));
	}
}
