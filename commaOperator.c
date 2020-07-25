/*
	Program to show the usage of the comma operator.
	AUTHOR: rapteon; DATE: 25JUL2020
*/

#include<stdio.h>

int main(void){
	int x, y;
	x = (y = 3, y + 1);	/*First 'y' is assigned the value 3, but 'x' is assigned the value 'y+1'.*/
	printf("Value of x = %d\n", x);
	printf("Value of y = %d\n", y);

	double p, q, r;
	p = q = r = 10.00;	/*Multiple assignments are allowed in C89.*/
	r = (p=2, q+=p, q+3);	/*Any number of comma separated operations are possible, I guess. *unsure*/
	printf("Value of p = %f\n", p);
	printf("Value of q = %f\n", q);
	printf("Value of r = %f\n", r);
	
	/*
		On a sidenote, //<your comment> or C++ style single-line comments are not allowed in C89.
	*/
	return 0;
}
