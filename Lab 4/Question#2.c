#include<stdio.h>
int main(){
	int num1, num2, result;
	char operators;
	printf(" Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2:  ");
	scanf("%d",&num2);
	while ((getchar()) != '\n');
	printf("Enter the operator (+,-,/,*): ");
	scanf("%c",&operators);
	
	switch(operators){
		case  '+' :
			result = num1+num2;
			printf("The addition of first and second number is:%d ", result);
			break;
       	case '-' :
			result = num1-num2;
			printf("The subtraction of first and second number is: %d ", result);
			break;
     	case '*':
			result = num1*num2;
			printf("The multiplication of first and second number is: %d", result);
			break;
    	case '/' :
			result = num1/num2;
			printf("The division of first and second number is: %d ", result);
			break;
		default:
			printf("Invalid operator, Please enter a valid operator");

	
	}
	
	
}