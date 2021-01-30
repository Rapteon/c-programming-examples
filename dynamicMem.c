/*
 * AUTHOR: Rapteon; DATE: Wednesday 20 January 2021, 07:48:09 PM
 * Program to show the usage of dynamic memory allocation using malloc().
 * The program prints the reversed input string.
 * To compile, use `cc dynamicMem.c -o dynamicMem.out`
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("Try: `./dynamicMem.out <string>` without the quotes and chevrons.\n");
		exit(1);
	}

	char *inputString = argv[1];
	int stringLength = strlen(inputString);
	char *reversedString = (char *)malloc(stringLength * sizeof(char));

	printf("You entered: %s\n", inputString);


	if(!reversedString) {
		printf("Not enough memory.\n");
		exit(2);
	}

	for(int i = 0; i < stringLength; i++){
		reversedString[i] = *(inputString+stringLength-1-i);
	}
	reversedString[stringLength] = '\0';

	printf("Reversed: %s\n", reversedString);
	exit(0);
}
