#include<stdio.h>
main ()
{
	int integer1,integer2;
	printf("Enter two integer ");
	scanf("%d %d",&integer1,&integer2);
	if(integer1 % integer2==0)
	{
		printf("Interger %d is a multiple of Integer %d ",integer1,integer2);
		printf("By a factor of %d",integer1/integer2);
	}
	else if (integer1 % integer2!=0)
	{
		printf("Integer %d is not multiple of Integer %d",integer1,integer2);
	}
}
