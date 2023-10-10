#include<stdio.h>
main (){
	int number,temp1,temp2;
	printf("Enter 5 digit number\n");
	scanf("%d",&number);

	printf("%d ",number/10000); // print left most digit
	temp2=number%10000;
	
	printf("  %d ",temp2/1000);
	temp1=temp2%1000;
	
	printf("  %d ",temp1/100);
	temp2=temp1%100;
	
	
	printf("  %d ",temp2/10);
	temp1=temp2%10;
	
	printf("  %d\n",temp1); //print right most digit
}
