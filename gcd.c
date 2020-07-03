/*
 * Implementation of an algorithm to find the
 * GCD (greatest common divisor) of two numbers.
 * Input: Two non-negative integers, both not zero.
 * Output: A single integer which is the largest number which can divide both the numbers.
 */

/*
 * Limitations:
 * The buffer to store the number is only enough to
 * take a two digit number.
 */

#include<stdio.h>
#include<math.h>

int gcd(int, int);
int gcd_recursive(int , int);

int main(){
	int m = 0, n = 0;
	printf("First Number: ");
	scanf("%d", &m);
	printf("Second Number: ");
	scanf("%d", &n);
	printf("gcd(%d,%d) = %d\n",m, n, gcd(m,n));
	printf("gcd_recursive(%d,%d) = %d\n", m, n, gcd_recursive(m,n));
	return 0;
}

int gcd(int m, int n){
	register int t = 0;
	while(n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}

int gcd_recursive(int m, int n){
	/*
	 * If n == 0, then gcd(m, 0) = m
	 */
	if(!n)
		return m;
	/*
	 * Else gcd(m, n) = gcd(n, m mod n)
	 */
	else
		return gcd_recursive(n, m%n);
}
