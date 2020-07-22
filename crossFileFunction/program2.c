#include<stdio.h>

/*
	Contains definition of "fileTwoFunction" which is called in "file1.c". Also contains the variable 'x'
	...which is used in "file1.c"
*/
int x = 10;

extern void fileTwoFunction(void){
	printf("In file \"file2.c\"\n");
}
