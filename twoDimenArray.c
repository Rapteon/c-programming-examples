/*Program to show dynamic memory allocation of 2-D arrays.*/
//AUTHOR: rapteon; DATE: 20200417

/* A 2-D array is consists of rows and columns,
 * in which every row is itself a 1-D array, and
 * multiple rows make up the rows of a 2-D array.
 * 
 * Here, the pointer to a pointer(two_dimens) means
 * that the pointer stores a series of 1-D arrays,
 * since each array is a pointer to a set of elements.
 *
 * In the first for-loop, the arrays forming the rows
 * of the 2-D array are initialized.
 *
 * The remaining two for-loops are for storing and 
 * displaying values of the 2-D array. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
		int rows = 2, cols = 2, temp;
	bool **two_dimens = (bool**)calloc(rows, sizeof(bool*));

	for(short i = 0; i < rows; i++)
		two_dimens[i] = (bool*)calloc(cols, sizeof(bool));

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++){
			printf("0 or 1 ? : ");
			scanf("%d", &temp);
			(temp)?two_dimens[i][j] = true:(two_dimens[i][j] = false);
		}

	for(short i = 0; i < rows; i++){
		for(short j = 0; j < cols; j++)
			two_dimens[i][j]?printf("1 "):printf("0 ");
		printf("\n");
	}
	return 0;
}
