#include"stdio.h"
main (){
	int n,k,factorial;
	printf("Enter any number");
	scanf("%d",&n);
	factorial=1;
	for(k=n; k>=1; k--)
	{
	
	
		factorial=factorial*k;
}
	printf("Factorial of %d = %d",n,factorial);
}

