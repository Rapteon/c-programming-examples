#include<stdio.h>
#include<math.h>
int main()
{
  int num;
  int numbers[num][num];
  printf("Enter a number between 1 and 15.\n");
  scanf("%d", &num);
  if(num<1&&num>15){
    printf("Wrong input.\n");
    return 0;
  }
  else
    {
      for(int i = 0; i<=num; i++){
        for(int j = 0; j<=num; j++){
          numbers[i][j]=0;
        }
      }
      int row = num-1, column = num/2;
      for(int k=1;k<=num*num;row++,column++){
        numbers[row][column]= k;
        if(row==num){
          numbers[row][column]=0;
          row = num-1;
        }
        if(column == num){
          numbers[row][column]=0;
          column = num/2;
        }
      }
    }
  printf("%d", numbers[0][5]);
}
