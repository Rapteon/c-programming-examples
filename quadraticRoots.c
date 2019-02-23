#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c, d, x1, x2;

  printf("Enter the coefiicient of x^2\n");
  scanf("%d", &a);
  printf("Enter the coefficient of x\n");
  scanf("%d", &b);
  printf("Enter the constant term\n");
  scanf("%d", &c);

  d = (b*b)-(4*a*c);

  if(d>=0){
    x1 = ((-b)+ sqrt(d))/(2*a);
    x2 = ((-b)- sqrt(d))/(2*a);

    printf("The roots of the quadratic equation are %d and %d\n", x1, x2);
  }
  else{
    float rea = (-b)/(2*a);
    float imag = (sqrt(-d)/(2*a));

    printf("The root are %f + %f i\n", rea, imag);
    printf("The root is %f - %f i\n", rea, imag);
  }
}
