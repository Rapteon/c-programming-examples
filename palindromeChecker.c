// AUTHOR: rapteon; DATE: 30th January 2021
/*
 * Program to check if a string is a palindrome or not. Does not ignore case.
 * Time Complexity: O(n/2)
 * To compile, use `cc palindromeChecker.c -o palindromeChecker.out`
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		printf("Insufficient parameters.\n");
		printf("Try: ./palindromeChecker <string>\n");
		exit(2);
	}

	int stringLength = strlen(argv[1]);
	char *string = argv[1];

	for(int i = 0; i < stringLength; i++){
		if(string[i] != string[stringLength-1-i]){
			printf("NOT a palindrome.\n");
			exit(1);
		}
	}
	printf("Is a palindrome.\n");
	exit(0);
}
