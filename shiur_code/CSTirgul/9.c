

#include <stdio.h>
#define N 7

float divfun (float f, float g)
{
    float divv =0;
    divv = f / g;
    //printf("%f / %f = %f\n", f, g,divv);
    return divv;

}
void
sumfun (int a, int b)
{
    int sum =0;
    sum = a + b;
    printf("%d + %d = %d\n", a, b,sum);

}
void
print ()
{
  int i;
  for (i = 1; i < 6; i++)
    {
      printf ("%5d\n", i);
    }

}

void
main ()
{
  int t, r, check;
  print ();
  print ();
  print ();
  printf("ENTER TWO NUMBERS:\n");
  check = scanf("%d%d", &t, &r);
  sumfun(t,r);
  printf("%d / %d = %f\n",t,r, divfun(t,r));
  //printf("%d\n", (float)1+2);
  while (1);
}
