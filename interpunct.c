/*Program which prints some unicode characters-This is just for good presentation of output.*/
/*AUTHOR: Rapteon; DATE: 2019-18-11*/

#include<stdio.h>
#define INTERPUNCT "\u00b7"
#define MULTIPLICATION_DOT "\u22c5"
#define BULLET "\u2022"
#define black_left_pointing_index "\u261a"
#define black_right_pointing_index "\u261b"
#define white_left_pointing_index "\u261c"
#define white_right_pointing_index "\u261e"
#define ELLIPSIS "\u2026"
#define VERTICAL_ELLIPSIS "\u22ee"
#define left_dd_guillemet "\u00ab"
#define right_dd_guillemet "\u00bb"
#define left_guillemet "\u2039"
#define right_guillemet "\u203a"
#define degree "\u00b0"
#define reference_mark "\u203b"
#define multiplication "\u2715"
#define number "\u2116"
#define OBELUS "\u00f7"

int main(){
	printf("Interpunct = ");
	printf(INTERPUNCT);
	printf("\tlike 10");
	printf(INTERPUNCT);
	printf("August");
	printf(INTERPUNCT);
	printf("2019");
	printf("\n");
	printf("Bullet = ");
	printf(BULLET);
	printf("\n");
}

