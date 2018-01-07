/*
============================================================================
Name        :תרגיל בית HW3.1
Author      :
ID.Number   :
Version     : 0.1
Description :שאלה 1 - HW03
============================================================================
*/
#include <stdio.h>
#include <limits.h>

void
main ()
{
  int input1, min1, min, check;
  min = INT_MAX;
  min1 = INT_MAX;
  printf ("PLEASE ENTER A SERIE OF NUMBERS, TO FISNISH ENTER 0:\n");
  do
    {
      check = scanf ("%d", &input1);
      if (input1 > 0 && input1 < min)
	{
	  min = input1;
	}
      else if (input1 > min && input1 < min1)
	{
	  min1 = input1;
	}
      if (check == 0)
	{
	  break;
	}
      //printf("%d", INT_MAX);
    }
  while (input1 != 0);
  if (check == 0)
    {
      printf ("ERROR! Please enter only a series of numbers! Try again\n");
    }
  else
    {
      printf
	("The two smallest positive (not including 0) digits supplied were: %d and %d !!!\nBye bye!! Exiting...\n",
	 min, min1);
    }
  while (1);
}



/*
============================================================================
Correct Output==>__________________________________________________________


PLEASE ENTER A SERIE OF NUMBERS, TO FISNISH ENTER 0:
-1
2
33
-5
65
33
2
3
0
The two smallest positive (not including 0) digits supplied were: 2 and 3 !!!
Bye bye!! Exiting...




============================================================================
ERROR Output==>__________________________________________________________





PLEASE ENTER A SERIE OF NUMBERS, TO FISNISH ENTER 0:
f
ERROR! Please enter only a series of numbers! Try again







====>> Bye Bye!<<====
============================================================================







*/
