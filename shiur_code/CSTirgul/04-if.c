/*



*/

#include<stdio.h>


void main()
{
  int input1, input2, result1, result2, result3;
  printf("PLEASE ENTER 2 INT: ");
  check = scanf("%d%d",&input1, &input2);
  if (check < 2){
    printf("Erorr\n");
  }
  if (input1 > input2) {
    result1 = input1 - input2;
    printf("\nThe result is:%d\n",result1);
  }
  else if (input1==input2){
    result2 = input1 * input2;
    printf("\nThe result is:%d\n",result2);
  }
  else {
    result3 = input1 + input2;
    printf("\nThe result is:%d\n",result3);
    }
    while(1);
}
