/*Program to show the sending and receiving of values between functions.*/

#include<stdio.h>

int sum(int a, int b, int c)
{		
	int d;
	d = a+b+c;
	return(d);
}

int main()
{
	int x, y, z;	
	int result;	
	printf("Enter three numbers.\n");
	scanf("%d %d %d", &x, &y, &z);
	result = sum(x, y, z);
	printf("The sum of the three numbers is %d.\n", result);
}

