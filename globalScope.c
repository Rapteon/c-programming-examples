#include<stdio.h>

int count = 0;		//Globla variable. Can be accessed anywhere in a program, except in a block which has a local
			//...variable of the same name.

void fun(void);

int main(){
	printf("%d\n", count);		//Printing value of global variable.
	fun();
}

void fun(void){
	int count;
	for(count = 1; count <= 10; count++)
		printf("%d\n", count);		//Printing value of local variable.
}
