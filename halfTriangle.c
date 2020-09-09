/*Program to print half triangle; AUTHOR:rapteon; DATE:20190223*/

#include<stdio.h>

int main(){
  for(int i =1; i<=5; i++){
    for(int j = 1; j <= i; j++)
      printf("*");
    printf("\n");
  }
}
