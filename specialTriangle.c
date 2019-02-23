#include<stdio.h>

int main(){
	for(int i =0;i<10; i++){
		for(int j =0; j<i; j++){
			(j%2!=0)?(printf("0\t")):(printf("1\t"));		
		}
	printf("\n");
	}
}
