#include<Stdio.h>
main (){
	int a,b,c,largest,smallest;
	printf("Enter three integers ");
	scanf("%d %d %d",&a,&b,&c);
	// sum average and product
	printf("Sum is %d\n",a+b+c);
	printf("Product is %d\n",a*b*c);
	printf("Average is %d\n",(a+b+c)/3);
	smallest=a; //assume first digit is smallest
	if(b<smallest){
		smallest=b;
	}
	if(c < smallest){
		smallest=c;
	}
	printf("Smallest is %d",smallest);
	largest=a;
	if(b>largest){
		largest=b;
	}
	if(c>largest){
		largest=c;
	}
	printf("\nLargest is %d",largest);
	
	
}
