#include<stdio.h>
main ()
{
	int a=20,b=0;
	b=a++;
	printf("a=%d b=%d\n",a,b);
	a=20;
	b=0;
	b=++a;
	printf("a=%d b=%d\n",a,b);
}
