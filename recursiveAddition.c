/*Program showing recursive addition of elements of an integer array; AUTHOR: rapteon; DATE; 2019-07-27*/

#include<stdio.h>

int add(int *element, int *lastElement){
	int sum = 0;

	if(*element == *lastElement){
		sum = sum + *(element);
		element = &(*(element+1));
		return *lastElement;
	}
	else
		sum = sum + *(lastElement) + add(&(*(element)), &(*(lastElement-1)));
}
int main(){
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum;
	
	sum = add(&array[0], &array[9]);
	
	printf("Sum = %d\n", sum);
}
