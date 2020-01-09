// Macros with postfixed parameters
//AUTHOR: rapteon; DATE: 20190109

#include<stdio.h>
#define PRODUCT(x) x*x

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);  //Another cool way of assignment.
    
    num = PRODUCT(num++);

    printf("Num: %d\n", num);
    return 0;
}