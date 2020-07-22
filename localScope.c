#include<stdio.h>

//Each of the variables in braces are local to their scope. As a result, they are destroyed as execution proceeds.
//Technically, these variables have the storage modifier 'auto', but it is not explicitly mentioned.

int main(){
	int x = 1;
	{
		int x = 2;
		{
			int x = 3;
			{
				int x = 4;
				printf("%d\n", x);
			}
			printf("%d\n", x);
		}
		printf("%d\n", x);
	}
	printf("%d\n", x);
}
