#include<stdio.h>
void main(){
	//printing character data
	char*ch = "A";
	printf("Printing Character data: %c\n",ch);
	//printing integer data
	int x = 45;
	printf("Printing integer data: %d\n",x);
	//printing floating point data
	float f = 2.45;
	printf("Printing floating point data: %f\n",f);
	// printing scientific notation
	printf("Printing scientific notation: %e\n",f);
	//printin octal format
	int a = 56;
	printf("Printing in octal format: %o\n",a);
	//print in hex code
	printf("Printing in hex code: %x\n",a);
	float z = 6.4;
	printf("float value of y is %g\n",z);
	printf("Address value of y in hexadecimal form is %p\n");
	
	char str[]="Hello World";
	printf("%s\n",str);
	printf("shift to  the right 20 characters: %20s\n",str); 
	
	
}