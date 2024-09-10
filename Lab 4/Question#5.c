#include<stdio.h>
int main(){
	int id, units;
	float charge, surcharge, total_bill;
	char name;
	printf("Enter your id: ");
	scanf("%d",&id);
	printf("Enter your name: ");
	scanf("%c",&name);
	printf("Enter your consumed units:  ");
	scanf("%d",&units);
	if(units<=199){
		charge = 16.20;
	}
	else if(units>=200 && units<300){
		charge = 20.10;
	}
	else if(units>=300 && units<500){
		charge = 27.10;
	}
	else if(units>=500){
		charge = 35.90;
	}
	float bill = charge * units;
	if (bill>18000){
	    surcharge = bill*0.15;
		total_bill = bill + surcharge;
	}
	printf("Customer ID: %d\n",id);
	printf("Customer Name: %c\n", name);
	printf("Units Consumed: %d\n", units);
	printf("Amount Charges at %f per unit : %.2f\n", charge,bill);
	printf("Surcharge Amount: %.2f\n", surcharge);
	printf("Net Amount to be paid by the user: %.2f\n", total_bill);
	
}