//AUTHOR: rapteon; DATE: 20200320
//Program to print a staircase made of '#' characters.

#include<stdio.h>

#define CHARACTER '#'
#define SPACE ' '

void printStairs(int n){
    for(int i = 0; i < n; i++){     //Loop to print a row.
        for(int j = 0;j < n-i-1; j++)   //Loop to print spaces.
            printf("%c",SPACE);
        for(int k = 0; k <= i; k++)      //Loop to print characters.
            printf("%c",CHARACTER);
        printf("\n");
    }
}

int main(int argc, char** argv){
    printStairs(4);
    return 0;
}