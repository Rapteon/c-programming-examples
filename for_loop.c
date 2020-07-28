/*
	Program to show different ways of writing for-loops.
	AUTHOR: rapteon; DATE: 28JUL2020
*/

#include<stdio.h>

int main(void) {
	int counter, sum = 0;

	/*Sum up all the numbers from 0 to 9*/
	for (counter = 0; counter < 10; counter++)
		sum += counter;
	printf("Sum = %d\n", sum);

	/*Statements in the block are executed as long as 'i' is not equal to 'j'.*/
	int i, j;
	for (i = 0, j = 10; i != j; i++, j--)
		printf("i = %d\tj = %d\n", i, j);
	
	/*'i' and 'j' are both equal to 5.*/
	printf("ANDing\n");
	/*When 'j' becomes less than 0, the condition i && (j>=0) becomes false, since j>=0 is false then.*/
	for (; i && j >= 0;) {
		printf("i = %d\tj = %d\n", i, j);
		i++; j--;
	}
	/*An infinite loop.*/
	for (;;);
}