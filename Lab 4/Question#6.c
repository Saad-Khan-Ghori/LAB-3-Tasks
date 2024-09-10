#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num>=1 && num<=9){
		switch(num){
			case 1:
				printf("one");
			case 2:
				printf("two");
			case 3:
				printf("three");
			case 4:
				printf("four");
			case 5:
				printf("five");
			case 6:
				printf("six");
			case 7:
				printf("seven");
			case 8:
				printf("eight");
			case 9:
				printf("nine");
		}
	}
	 else if(num>9){
	 	printf("Number is greater than 9");
	 }
	}
}