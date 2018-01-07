/*
============================================================================
Name        :תרגיל בית HW3.2
Author      :
ID.Number   :
Version     : 0.1
Description :שאלה 2 - HW03
============================================================================
*/
#include <stdio.h>

void main ()
{
  int input1, input2, var1, var2, check, i, j;
  printf ("PLEASE ENTER TWO NUMBERS:\n");
  check = scanf ("%d%d", &input1, &input2);
  if (check==2)
  for (i = 1; i <= input1; i++)
    {
      for (j=1; j<=input2; j++)
      {
        if(i!=j)
        {
          printf("%d  %d\n",i, j);
        }
        else
        {
          printf("  %d  %d\n", i, i);
        }

      }
      printf("\n");
    }else
    {
      printf("ERROR you have enterd and invalid input!!\n");
    }
  while (1);
}


/*
============================================================================
Correct Output==>__________________________________________________________


PLEASE ENTER TWO NUMBERS:
4 5
  1  1
1  2
1  3
1  4
1  5

2  1
  2  2
2  3
2  4
2  5

3  1
3  2
  3  3
3  4
3  5

4  1
4  2
4  3
  4  4
4  5







============================================================================
ERROR Output==>__________________________________________________________


PLEASE ENTER TWO NUMBERS:
r
ERROR you have enterd and invalid input!!










====>> Bye Bye!<<====
============================================================================







*/
