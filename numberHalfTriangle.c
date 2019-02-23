/*
Program to print half triangle like this...
  55555
  4444
  333
  22
  1
AUTHOR:rapteon;DATE:20190223
*/

#include<stdio.h>

int main(){
  for(int i = 5; i>=1; i--){
    for(int j = i; j>=1; j--){
      printf("%d", i);
    }
    printf("\n");
  }
}
