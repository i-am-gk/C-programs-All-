#include<stdio.h>
main()
{
	for (int i=1;i<5;i++)
	{
		int j=0;
		while(j<i){
			printf("%d",j);
			j++;
		}
		printf("\n");
	}
}
