

#include <stdio.h>

void print(int i)
{
  if(i<0) return;
  printf("%d\n", i);
  print(i-1);
  //while(1);
}
void print2(int i)
{
  if(i>0) return;
  printf("%d\n", i+1);
  print(i-1);
  //while(1);
}

int print3(int i)
{
  static int sum = 0;
  if(i<=0) return sum;
  sum = sum + i;
  printf("%d\n", sum);
  print2(i-1);
  //while(1);
}

void
main ()
{
  int n;
  scanf("%d", &n);
  printf("QUESTION 1 -a\n");
  print2(n);
  printf("QUESTION 2 -b\n");
  print(n);


  while(1);
}
