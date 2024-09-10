#include<stdio.h>
int main(){
	int num1;
	printf("Enter a number to check if its multiple of 3: ");
	scanf("%d",&num1);
	if(num1%3 ==0){
		printf("This number is multiple of 3");
	}
	else{
		printf("This number is not multiple of 3");
	}
	
}