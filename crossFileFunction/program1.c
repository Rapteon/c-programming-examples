#include<stdio.h>

void fileOneFunction(void);
extern void fileTwoFunction(void);
/*
	This function is defined in "file2.c". The 'extern' keyword allows declaration of variables/functions without defining them
	...in the same file.
*/
				

int main(){
	extern int x;
	fileOneFunction();
	fileTwoFunction();
	printf("x from file2 is: %d\n", x);
}

void fileOneFunction(void){
	printf("In file \"file1.c\"\n");
}
