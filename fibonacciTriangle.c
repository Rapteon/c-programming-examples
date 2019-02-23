/*Program to print a triangle which has Fibonacci numbers in each row; AUTHOR:rapteon; DATE:20190223*/

#include<stdio.h>

int main(){
  for(int i =1; i<=5; i++){
    int num1 = 0, num2 = 1, num3;
    for(int j = 1; j<=i; j++){
      if(j == 1)
        printf("0");
      else if(j == 2)
        printf("1");
      else{
        num3 = num1+num2;
        printf("%d", num3);
        num1 = num2;
        num2 = num3;
      }
    }
    printf("\n");
  }
}
