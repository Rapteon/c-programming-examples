#include<stdio.h>
#include<math.h>

#define PI 3.14159265
int main()
{
	double sineVal, interVal;
	int i, j, k, yum;
	k = 5;
	for(i=1;i<=k;i++){
		for(j=0;j<i;j++){
			(j%2!=0)?printf("1"):printf("0");
		}
		printf("\n");
	}
}
