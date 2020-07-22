/*
	Given an single-dimensional array, check if all the elements within it are unique.
	I am using a character array for this.
*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 32

// If the array is unique, the function returns true, else false.
bool isUnique(char* array, int size) {
	//'i' is incremented till it is ends up being equal to 'size-1'. The latter corresponds to the second element from the end.
	for (int i = 0; i < size - 1; i++)
		//'j' is incremented till it ends up being equal to 'size'. The latter corresponds to the 'NULL' character in the string.
		//In C, strings are null-terminated.
		for (int j = i + 1; j < size; j++)
			if (*(array + i) == *(array + j))	//Same as A[i] == A[j].
				return false;
	return true;
}
int main(){
	char* inputBuffer = malloc(sizeof(char) * MAX_SIZE);	//Buffer to store input string.
	printf("Enter a String: ");
	fgets(inputBuffer, MAX_SIZE+1, stdin);		//Storing input in inputBuffer.
	//Prints "UniqueCharacters = true" if all the characters are unique within the string.
	isUnique(inputBuffer, strlen(inputBuffer)) ? printf("UniqueCharacters = True\n") : printf("UniqueCharacters = False\n");
}

//To try: ignore case to check if the string has unique characters within it.