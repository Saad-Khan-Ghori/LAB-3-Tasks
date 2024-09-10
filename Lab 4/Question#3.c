#include<stdio.h>
int main(){
	char c;
	printf("Enter a character");
	scanf("&c",&c);
	
	if(c>='A'&& c<='Z'){
		printf("Character is an uppercase letter");
	}
	else if(c>='a' && c<='z'){
		printf("Character is a lowercase letter");
	}
	else if(c>='0' && c<='9'){
		printf("Character is a digit");
	}
	else{
		printf("Character is a special character");
	}
}