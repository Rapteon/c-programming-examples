/*
	Program to show bitwise operations on integers. Bitwise operations are used while writing device drivers.
 	AUTHOR: rapteon; DATE:24JUL2020
*/

#include<stdio.h>

int bitwiseAnd(int, int);
int bitwiseOr(int, int);
int bitwiseNot(int);
int bitwiseXor(int, int);
int shiftLeft(int);
int shiftRight(int);

int main(){
	int m, n;
	m = 7;
	n = 5;
	printf("ANDing: %d\n", bitwiseAnd(m,n));
	printf("ORing: %d\n", bitwiseOr(m,n));
	printf("NOTing: %d\n", bitwiseNot(m));
	printf("XORing: %d\n", bitwiseXor(m,n));
	printf("Shifting Left: %d\n", shiftLeft(m));
	printf("Shifting Right: %d\n", shiftRight(m));

	return 0;
}

/*
	m&n = Bitwise AND of m and n
	m|n = Bitwise OR of m and n
	~m =  One's complement of m
	m^n = Bitwise XOR of m and n 
*/
int bitwiseAnd(int m, int n){
	return m&n;
}
int bitwiseOr(int m, int n){
	return m|n;
}
int bitwiseNot(int m){
	return ~m;
}
int bitwiseXor(int m, int n){
	return m^n;
}
int shiftLeft(int m){
	//Bits of m are moved 1 bit towards left. After the operation, the least significant bit contains 0. Also a left shift effectively multiplies a number by 2.
	return m<<1;
}
int shiftRight(int m){
	//Bits of m are moved 1 bit towards right. After the operation, the most significant bit contains 0. Also a right shift effectively divides a number by 2.
	return m>>1;
}
