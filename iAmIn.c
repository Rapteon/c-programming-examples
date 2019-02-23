/*Program to demonstrate how functions work.*/

#include<stdio.h>

int italy()
{
	printf("I am in Italy.\n");
	return 0;
}

int brazil()
{
	printf("I am in Brazil.\n");
	return 0;
}

int india()
{
	printf("I am in India.\n");
	return 0;
}

int main()
{
	printf("I am in main.\n");
	italy();
	brazil();
	printf("Main is back, and going...\n");
	india();
}
