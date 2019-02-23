#include<stdio.h>

int main()
{
	int i, length = 4;
	char ch;
	char password[3];
	printf("Enter the password\n");
	for(i=0; i<=length; i++)
	{
		scanf("%c", &ch);
		password[i]= ch;
		printf("*");
	}
}


