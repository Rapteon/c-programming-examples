//Program to show multiple assignment of variables
//DATE: 23JUL2020; AUTHOR: rapteon
//Compiler: gcc v10.1.0

#include<stdio.h>
#include<stddef.h>

int main(){
	int x,y,z;
	//In the case, 'int x = y = z = 10;' error is shown by gcc. 'y undeclared, z undeclared'
	x = y = z = 10;

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}
