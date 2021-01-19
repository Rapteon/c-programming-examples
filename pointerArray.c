/*
 * AUTHOR: rapteon; DATE: 20200120
 * Program to show the usage of pointer arrays.
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX_STRINGS 4

int main(void){
	/*
	 * The following line initializes an array of pointers wherein each
	 * pointer points to the memory location of the first character of a
	 * string. These strings are stored in a location called the string table.
	 * Refer to the book 'The Complete C Reference (4th Edition) by Herbert Schildt'
	 */
	char *strings[MAX_STRINGS] = {
		"Ada Lovelace",
		"Alan Turing",
		"Charles Babbage",
		"Grace Hopper"
	};

	int input;
	printf("Enter a natural number: ");
	scanf("%d", &input);

	//Decrementing to allow user to use simple positions to denote the string to print.
	input--;

	if(input > 3 || input < 0){
		printf("None selected. Invalid input.");
		return 1;
	}
	printf("Selected: %s\n", strings[input]);	
	return 0;
}
