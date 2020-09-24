/*
 * Program to convert binary numbers to decimal.
 * AUTHOR: rapteon; DATE: 24SEP2020
 */

#include<stdio.h>
#include<math.h> //Required for the pow() function.

long binaryToDecimal(long*);

int main(void){
    long num;
	printf("Binary: ");
	scanf("%ld", &num);
	printf("Decimal: %ld\n", binaryToDecimal(&num));
	return 0;
}

long binaryToDecimal(long* num){
	long sum = 0, i = 0;

	while(*num > 0){
		/*
		 * Performing sum = sum + num[i] * 2^i
		 * where num[i] refers to the digits of num
		 * when counting starts from the LSB(least significant bit).
		*/
		sum += (*num%10) * pow(2, i++);

		//Dividing 'num' by 10 to make another digit the LSB.
		//This means that the original number will be destroyed. Oops.
		*num /= 10;
	}

	return sum;

}
