

#include <stdio.h>

void print(int i)
{
  if(i>100) return;
  printf("%d\n", i);
  print(i+14);
  while(1);
}

int print2(int i)
{
  static int sum = 0;
  if(i<=0) return sum;
  sum = sum + i;
  printf("%d\n", sum);
  print2(i-1);
  while(1);
}

void
main ()
{
  //print(0);
  print2(5);

}
