/*
 * Program implementing multiplication using successive additions.
 * AUTHOR: rapteon: DATE: 03OCT2020
 */

#include<stdio.h>

/*
 * The folowing function performs multiplication of values of X and Y and stores
 * the result in Z;
*/
int mult(int X, int Y);

int main(void){
		int num1 = 6, num2 = 7, result;
		result = mult(num1, num2);
		printf("Result = %d\n", result);
//		return *result;
}

int mult(int X, int Y){
		int Z = 0;
		for(int i = 0; i < Y; i++)
				Z += X;
		return Z;
}
