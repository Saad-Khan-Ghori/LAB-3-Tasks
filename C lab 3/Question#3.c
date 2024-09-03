#include<stdio.h>
int main(){
	int salary;
	float taxRate,tax,remainingSalary;
	printf("Enter your salary: \n");
	scanf("%d",&salary);
	printf("Enter your tax rate in percentage:  \n");
 	scanf("%d",&taxRate);
	tax = salary*(taxRate/100);
	remainingSalary = salary-tax;
	printf("Your income tax is %d\n",tax);
	printf("Your remaining salary after paying income tax is %d",remainingSalary);
	}