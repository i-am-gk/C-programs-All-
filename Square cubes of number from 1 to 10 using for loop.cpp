#include<stdio.h>
main ()
{
	printf("N1\tN2\tN3\tN4\n");
	for(int i=1;i<=10;i++)
	{
		printf("%d\t%d\t%d\t%d\n",i,i*i,i*i*i,i*i*i*i);
	}
}
