/*
	Program which asks user to guess a number.
	AUTHOR: rapteon; DATE: 28JUL2020
	Compiler: Microsoft C/C++ Optimizing Compiler v19.26.28806 for x86
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int actualNumber, guessedNumber, seed;
	printf("Initialize the seed\n");
	printf("Seed: ");
	scanf("%d", &seed);

	srand(seed);	//Calling srand() to initialize the seed.

	actualNumber = rand()%RAND_MAX;

	while (1) {
		printf("Enter your guess: ");
		scanf("%d", &guessedNumber);

		if (guessedNumber == actualNumber) {
			printf("Hurray ! %d is the number.\n", guessedNumber);
			break;
		}
		else if (guessedNumber > actualNumber)
			printf("Your guess is too high.\n");
		else
			printf("Your guess is too low.\n");

	}
}