#include<stdio.h>

int main(){
	char name[34];
	//printf("%s", name);

	//Pointing assigning a string value to a pointer.
	char *stringPine = fgets(name, 34, stdin);
	
	//Printing a string using pointers.
	for(int i = 0; *(stringPine)!='\0'; i++,stringPine++){
		printf("%c", *(stringPine));
	}
}
