/*
 * AUTHOR: rapteon; DATE: 24AUG2020
 * Program to show the usage of 'goto' keyword. The 'goto' keyword is used in the form 'goto label' where 'label' is the
 * name of the label used to jump to a set of statements. The 'label' must be defined before the 'goto' call is made.
 */

#include<stdio.h>

int main(void){
	short index = 0;
	goto printing;
	char *sentence = "The quick brown fox jumps over the lazy dog.";
printing:
	if(*(sentence+index) != '\0'){
		printf("%c",*(sentence+index));
		index++;
		goto printing;
	}
}
