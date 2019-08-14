#include<stdio.h>

int main(){
	char names[4][15] = {
				"John",
				"Jacob",
				"James",
				"Jules"
				};

	for(int i = 0; i < 4; i++){
		for(int j = i;j == i; j++)
			printf("%s\n", names[i]);
	}
}
