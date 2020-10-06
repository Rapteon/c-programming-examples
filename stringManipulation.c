/*
 * AUTHOR: rapteon; DATE: 25AUG2020
 * Program to show the usage of some functions defined in 'string.h'.
 * Note: This program doesn't use all the functions defined in string.h
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 10

int main(void){
	char str[MAX_SIZE] = "thesaurus";

	printf("Original String: ");
	for(short i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");

	printf("Size of Character Array = %ld\n", sizeof(str));
	printf("String Length = %ld\n", strlen(str));		//Note that strlen() returns the number of bytes present in the string, and not th enumber of characters.
	char copy[MAX_SIZE]; 

	strcpy(copy,str);	//Careful with this ! May cause buffer overflows. Bad for security.
	printf("Copied: %s\n", copy);
	strncpy(copy, str, 3);		//Copying the first 3 characters of 'str' into copy'.

	memset(copy, '\0', strlen(copy));	//Clearing the copy. Previously written elements will still be there.
	strncpy(copy, str, 3);		//Copies the first 3 characters from 'str' into copy.

	printf("Partial copy: %s\n", copy);

	memset(copy, '\0', MAX_SIZE);	//Filling character array with NULL bytes all the way upto the last byte.
	printf("Enter another string for comparison, preferably the same string as printed first, but with case changed\n: ");
	fgets(copy, MAX_SIZE, stdin);
	
	int comparisonResult = strncasecmp(str, copy, (size_t)MAX_SIZE);
	(comparisonResult == 0)?printf("Strings differ by case, but are same.\n"):(comparisonResult > 0)?printf("The second string is lexicographically greater."):printf("The second string is lexicographically smaller.");
	printf("The comparison result is %d\n",comparisonResult);
	return 0;
}
