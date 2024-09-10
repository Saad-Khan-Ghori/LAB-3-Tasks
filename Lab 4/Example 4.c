#include <stdio.h>
 int main() {
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if(num1>0){
       printf("num1 = %d is positive", num1);
    }
	else if (num1<0){
	   printf("num1 = %d is negative", num1);
   }
   else {
   	  printf("num1 = %d is zero", num1);
    }

    return 0;
 }