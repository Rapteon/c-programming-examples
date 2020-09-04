/*
 * AUTHOR: rapteon; DATE: 24AUG2020
 * Program to show the use of exit() function provided by the standard library 'stdlib.h'.
 * The exit() function terminates the execution of a program immediately. It is usually given an...
 * ...integer parameter, which becomes the return code of the program. You can see the return code when executing the program in a shell.
 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
	printf("What is the Answer to the Ultimate Question of Life, the Universe and Everything?\n");
	exit(42);	//The integer passed as an argument is the return code obtained after the program terminates.
	return 0;	//Unlike expected, this program does not return 0 as the exit code.
}
