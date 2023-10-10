#include<stdio.h>
main ()
{
	int s=1;
	do {
		printf("%d\t",s);
		s++;
		if(s==5)
		{
			break;
		}
		else 
		continue;
	}
	while(s<=10);
}

