/*Program to create a function to square an integer.*/
#include<stdio.h>

float square(float x)
{
	float res = x*x;
	return(res);
}


int main()
{
	float inputNumber;
	float sqr;
	printf("Enter the number to be squared  ");
	scanf("%f", &inputNumber);
	sqr = square(inputNumber);
	printf("The square of %f is %f\n", inputNumber, sqr);
	return 0;
}



