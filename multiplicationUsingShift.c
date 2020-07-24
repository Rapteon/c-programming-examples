/*
	Program to show multiplication of a number using left shifting.
	AUTHOR: rapteon; DATE: 24JUL2020
*/

#include<stdio.h>

int multiply(int, int);

int main(void){
	for(char i = 0; i < 6; i++)
		printf("Result = %d\n", multiply(2, i));

	return 0;
}


int multiply(int num, int factor){
	/*
		'num' is the multiplicand.
		'factor' refers to the exponent in the multiplier. Multiplier is 2^factor.
	*/
	/*
		If factor=1, num is multiplied by 2.
		If factor=2, num is multiplied by 4.
		If factor=3, num is multiplied by 8.
		If factor=4, num is multiplied by 16.
	*/
	return num<<factor;	
}
