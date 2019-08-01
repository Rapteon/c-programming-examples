/*Program to read a file containg the poem `Invictus` and print it on the terminal; AUTHOR: rapteon; DATE: 31st July 2019 */
//Requires the file `Invictus` to be in the same directory
#include<stdio.h>
#include<unistd.h>

int main(){
	char ch;
	int lines = 0;
	int characters = 0;
	FILE *filePointer;
	filePointer = fopen("Invictus", "r");
	
	while(1){
		ch = fgetc(filePointer);
		if(ch == EOF)
			break;
		else{
			printf("%c", ch);
			characters++;
		}

		if(ch == '\n'){
			usleep(30000);
			lines++;
		}
	}
	
	printf("\n\nPrinted %d lines containing %d characters.\n", lines, characters);
}
