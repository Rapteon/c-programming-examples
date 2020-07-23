#include<stdio.h>
#include<stdbool.h>

/*
	The function 'fibTerm(bool)' prints the next/previous term in the fibonacci series using a static variables to store the
	first, second and third terms. Since the values of 'num1', 'num2' and 'num3' are preserved during function call,
	we can generate the next/previous term using these values. Also the values of 'num1', 'num2' and 'num3' are not initialized
	each time the function is called.
*/
int fibTerm(bool next);

int main(){
	printf("First Term: %d\n", fibTerm(true));
	printf("Second Term: %d\n", fibTerm(true));
	printf("Third Term: %d\n", fibTerm(true));
	printf("Fourth Term: %d\n", fibTerm(true));
	printf("Fifth Term: %d\n", fibTerm(true));
	printf("Fourth Term: %d\n", fibTerm(false));
}

int fibTerm(bool next){
	static int num1 = 0;
	static int num2 = 1;
	static int num3;
	if(next){
		num3 = num1 + num2;		
		num1 = num2;
		num2 = num3;
		return num3;
	}
	else{
		int temp = num1;
		num1 = num2 - num1;
		num2 = temp;
		return num2;
	}
	
}
