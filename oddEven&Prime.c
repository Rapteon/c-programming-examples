#include<stdio.h>

int main()
{
  int num, choice;
  char retry ='y';
  printf("Enter a number\n");
  scanf("%d", &num);

  while(retry=='y'){
    printf("Which operation would you like to perform?\n");
    printf("1. Check if number is odd or even?\n");
    printf("2. Check if number is prime?\n");
    printf("Choice 1 or 2?\n");
    scanf("%d", &choice);

    switch(choice){
      case 1: if(num%2==0)
              printf("%d is even\n", num);
              else
              printf("%d is odd\n", num);
              break;
      case 2: for(int i=2;i<=(num/2);i++)
              {
                if(num%i==0)
                {
                  printf("%d is a composite number.\n", num);
                  break;
                }
                else{
                  printf("%d is a prime number.\n", num);
                  break;
                }
              }
                break;
      default:  printf("Error\n");
                break;
      }
      printf("Would you like to continue? y/n?\n");
      scanf(" %c", &retry);
    }
}
