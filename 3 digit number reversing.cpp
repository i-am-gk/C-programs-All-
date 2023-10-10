#include<conio.h> 
#include<stdio.h> 
int main () 
{ 
int n,a,b; 
printf("Enter the 3 digit value to be reversed:"); 
scanf("%d", &n); 
a=n/100; 
n=n%100; 
b=n/10; 
n=n%10; 
printf("The reverse order is: %d%d%d",n,b,a); 
 getch(); 
} 
