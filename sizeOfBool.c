/*
	Program using the 'sizeof' unary operator to find the size of a bool.
	AUTHOR: rapteon; DATE: 25JUL2020
	sizeof() returns the size of the variable/type in bytes. But the type of the returned
	...value is 'size_t' which loosely corresponds to an unsigned integer.
	In case we have to find the size of a variable name, the parentheses are optional.
	'sizeof' is evaluated at compile time, so the value it generates is treated as a constant.
*/
#include<stdio.h>
#include<stdbool.h>

int main(void){
	bool t=false;
	printf("Bool Size: %d\n",sizeof(t));
	printf("Bool Size Another Way: %d\n", sizeof t);
	//Note that 'sizeof()' is not a function.
}
