#include<stdio.h>
int main(){
	int discount, cost, saved_cost, after_discount;
	printf("Enter the cost of the items: ");
	scanf("%d", &cost);
	if(cost>500){
		if(cost<2000){
			discount = 5;
		}
		else if(cost>=2000 && cost<4000){
			discount = 10;
		}
		else if(cost>=4000 && cost<6000){
			discount = 20;
		}
		else if(cost>=6000){
			discount = 35;
		}
	}
	saved_cost = cost*discount/100;
	after_discount = cost - saved_cost;
	printf("Your bill before discount is: %d\n", cost);
	printf("The amount you saved through discount is: %d\n",saved_cost);
	printf("Your bill after discount is: %d\n", after_discount);
	
}