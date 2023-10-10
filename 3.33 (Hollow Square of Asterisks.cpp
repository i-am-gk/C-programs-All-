#include<stdio.h>
main ()
{
	int value;
	printf("Enter value");
	scanf("%d",&value);
	for (int i=1 ; i<=value ; i++)
	{
		
		for (int j=1 ; j<=5 ; j++)
		
		{
			if(i==1 || i==5 || j==1||j==5)
			printf("* ");
			else 
			printf("  ");
		}
		printf("\n");
	}
}
