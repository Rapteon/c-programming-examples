/*Some basics about pointers*/

#include<stdio.h>

int main()
{
	int i =10;
	printf("The value of i is %d\n", i);
	printf("The memory location of i is %p\n", (void*)&i);
	char x=9;
	printf("The address of x is %p\n", (void*)&x);
	printf("The value of x is %c\n", *(&x));
	printf("The address of the memory location of x is %p", &x);
	return 0;
}


