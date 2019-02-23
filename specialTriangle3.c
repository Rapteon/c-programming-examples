#include<stdio.h>

int main()
{
	int k;	
	for(int i = 0;i<=10; i++)
	{
		for(int j = 0;j<i;j++)
		{
			while(i%2!=0)
			{
				printf("0");
				i++;		
			}
			while(i%2==0)
			{
				printf("1");
				i++;			
			}
			i--;
		}
		printf("\n");	
	}
		
}
