#include<stdio.h>
int main(){
	int x ,y,temp;
	printf("Enter first number");
	scanf("%d",&x);
	printf("Enter second number");
	scanf("%d",&y);
	printf("Values of number 1 and number 2 before swapping are x=%d and y=%d\n",x ,y);
	temp = x;
	x = y;
	y = temp;
   	printf("Values of number 1 and number 2 after swapping are x=%d and y=%d",x ,y);	
}