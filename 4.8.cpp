#include<stdio.h>
int  main (void)
{
	int x , i ,j;
	printf("%s","Enter an integer  in range 1-20");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(j==1)
			{
				printf("%c",'@');
				
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
/* 
The given program prompts the user to enter an integer between 1 and 20 and then prints a square pattern of '@' 
characters with spaces in between.
Here's a breakdown of how the program works:
It includes the necessary header file stdio.h for input/output operations.
The main function is defined with a return type of int.
It declares variables x, i, and j of type int to be used in the program.
The program displays the message "Enter an integer in range 1-20" using printf.
It reads an integer value from the user and stores it in the variable x using scanf.
The program then enters a nested loop using for loops.
The outer loop runs from i = 1 to i <= x.
The inner loop runs from j = 1 to j <= x.
Inside the inner loop, an if statement checks if j is equal to 1.
If true, it prints an '@' character using printf.
Otherwise, it prints a space character using printf.
After the inner loop completes for each value of i, the program moves to a new line using printf("\n").
This pattern continues until the outer loop completes for each value of i, creating a square pattern of '@'
 characters with spaces in between.
Note: The program does not check if the user's input is within the specified range (1-20).
 It assumes that the user enters a valid integer in that range.
*/
