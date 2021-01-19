/*
 * AUTHOR: rapteon; DATE: 20210120
 * Program to show the usage of function pointers.
 */

#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 20

/*
 * Notice the following syntax carefully. 'check' is a function
 * which takes two strings to compare for equality along with
 * a pointer to a function. This pointer is used to select the
 * function which needs to be used to be checked for equality.
 */
void check(char *, char *, int (*funPoint)(const char *, const char *, size_t));

int main(void){
	/*
	 * Notice the syntax used to declare a function pointer.
	 * The name of the function pointer must be inclosed with
	 * parenthesis and the asterisk for it to be recognised
	 * as a function pointer.
	 */
	int (*functionPointer)(const char *, const char*, size_t);
	char s1[MAX_STRING_LENGTH], s2[MAX_STRING_LENGTH];
	int choice = 0;

	printf("Enter the first string: ");
	fgets(s1, MAX_STRING_LENGTH, stdin);
	printf("Enter the second string: ");
	fgets(s2, MAX_STRING_LENGTH, stdin);
	
	printf("COMPARE STRINGS:\n");
	printf("1\t Ignore-case comparison\n");
	printf("2\t Case-match comparison\n");
	printf("[1/2]?\n: ");
	scanf("%d", &choice);

	//Based on the option selected, the function is decided.
	switch(choice){
		case 1: functionPointer = strncasecmp;
			break;
		case 2: functionPointer = strncmp;
			break;
		default:
			printf("Invalid choice. Please retry.\n");
	}
	check(s1, s2, functionPointer);
	return 0;
}

void check(char* stringOne, char * stringTwo, int (*funPoint)(const char *, const char *, size_t)){
	printf("Checking if strings are equal…\n");
	/*
	 * Passing 'MAX_STRING_LENGTH' since strncmp and strncasecmp require
	 * the length of the string as a parameter.
	 */
	(*funPoint)(stringOne, stringTwo, MAX_STRING_LENGTH) == 0?printf("Equal\n"):printf("Unequal\n");
}
