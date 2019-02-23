/*Program to demonstrate functions in C(more)*/

#include<stdio.h>

int call()
{
	printf("Suraj cannot answer your phone now.\n");
	return 0;
}


int london()
{
	printf("Suraj is now in London.\n");
	printf("Ask Suraj about his travel?[y/n]\n");
	char ans;
	scanf("%c", &ans);
	if(ans=='y' || ans == 'Y')
	{
		call();
	}
	else
	{
		printf("Cool.\n");
	}
	return 0;
}

int kochi()
{
	printf("Suraj is now in Kochi.\n");
	printf("Suraj is now travelling.\n");	
	return 0;
}

int ny()
{
	printf("Suraj is now travelling.\n");
	london();
	printf("Suraj is back in New York.\n");
	printf("Suraj is now travelling...\n");
	return 0;
}





int main()
{
	printf("Suraj is in Pune.\n");
	printf("Suraj is now travelling.\n");
	kochi();
	printf("Suraj is back in Pune.\n");
	ny();
	printf("Suraj is back from New York.\n");
	return 0;
}


	
