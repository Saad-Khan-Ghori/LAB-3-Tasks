#include<stdio.h>
int main(){
	float km;
	float miles;
	printf( "Enter distance in kilometers: \n");
	scanf("%d",&km);
	miles =  0.621371*km;
	printf("%d km is equal to %d miles",km,miles);
	return 0;
}