#include<stdio.h>
#include<string.h>

int main(){
  int i;

  char a[80]="Hello";
  char b[80]="Suraj";

  strcpy(a, b);
  printf("a is %s\n", b);
  i = strcmp(a, b);
  if(i==0)
    printf("a and b are equal.\n");
  else if(i<0)
    printf("%s comes first.\n", a);
  else
    printf("%s comes second.\n", b);
}
