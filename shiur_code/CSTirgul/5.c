#include<stdio.h>
/*

void main()
{
  double x = 6.5, y;
  int i = 5;
  y = x + i;
  printf("Example #1: %f\n", y);
  double x = 6.5, y;
  int i = 5;
  y = x + i;
  printf("Example #2: %f\n", y);
  int =i;
  double x,y;
  x = 7.0;
  y = 2.0;
  i = 4 + x/y
  printf("Example #3: %d\n", i);
  double x = 6.5, y;
  int i = 5;
  y = x + i;
  printf("Example #4: %f\n", y);
    while(1);
}



void main()
{
int i, ix;
  for (printf("LOOP1: \n"),i=0; i<=5; i++)
  {
    printf("%d\n", i);
  }
  for (printf("LOOP2: \n"),i=1; i<=5; i++)
  {
    ix = i%2;
    if (ix==0)
    {
      printf("%d\n", i);
    }

  }
  for (printf("LOOP3: \n"),i=1; i<=5; i++)
  {
    ix = i%2;
    if(ix!=0)
    {
      printf("%d\n", i);
    }

  }
  for (printf("LOOP4: \n"),i=5; i>=0; i--)
  {
    printf("%d\n", i);
  }
  while(1);
}
*/

void main()
{
  int input1, nscore;
  printf("PLEASE ENTER SCORE: ");
  scanf("%d",&input1);
  if (input1>80 && input1<=100){
    nscore = input1 + 5;
    printf("Great your score is:%d\n", nscore);
  }
  else if (input1>60 && input1<=80){
    float nscore;
    nscore =((float)input1*0.1)+input1;
    printf("You passed with score: %f\n",nscore);
  }
  else {
    printf("You have failed! Your score is:  %d\n", input1);
    }
  while(1);
}
