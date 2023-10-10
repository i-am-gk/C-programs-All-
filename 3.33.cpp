#include<stdio.h>
main (){
	int side,rowPosition,size;
	printf("Enter sqaure side ");
	scanf("%d",&side);
	size=side;
	//loop side number of times'
	while(side>0){
		rowPosition=size;//set row counter to length of size
		
		//loop row position number of times
		while(rowPosition>0){
			//if size or row counter is 1 or size print *
		if(size==side){
			printf("*");
		}
		else if(side==1){
			printf("*");
		}
		else if (rowPosition==1)
		{
			printf("*");
		}
		else if(rowPosition == size)
		{
			printf("*");
		}
		else {
			printf(" ");
		}
		--rowPosition;//decrement row counter
		}
		printf("\n");// new line for next row
		--side; // decrement side
	}
	}
