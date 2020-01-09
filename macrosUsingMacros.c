//Macros using Macros
//AUTHOR: rapteon; DATE: 20190109

#include<stdio.h>
#include<math.h>

//The area is calculated using Heron's formula for area of a triangle.
//You can see the expanded macro by using the command "gcc macrosUsingMacros.c -E -o macrosUsingMacros.i" inside a terminal. Remember to navigate to the directory.
#define SEMIPERIMETER(a, b, c) ((a+b+c)/2)
#define AREA(a, b, c) (sqrt(SEMIPERIMETER(a, b, c)*(SEMIPERIMETER(a, b, c) - a)*(SEMIPERIMETER(a, b, c) - b)*(SEMIPERIMETER(a, b, c) - c)))

int main(){
    int a = 3, b = 4, c = 5, area;
    area = AREA(a, b, c);
    printf("%d\n", area);
    return 0;
}
