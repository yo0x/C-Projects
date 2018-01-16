/*
============================================================================
Name        : HW6.3
Author      :
Version     : 0.1
ID.Number   :
Description : Question 6.3
============================================================================
*/


#include <stdio.h>
#define N 6


int *
getdata ()
{
  static int array[N];
  int i, check;
  for (i = 0; i < N; i++)
    {
    //  printf("TEST\n");
      check = scanf ("%d", &array[i]);
      if (check!=1)
      {
        printf("Error! Only 6 numbers (no chars) are allowed! ..exiting\n");
        while(1);
      }
    }

  return array;
}

int
checkPali (int a[N])
{
  int t, count =0;

  for (t = 0; t < N - 2; t++)
    {
      switch (t)
	{

	case 0:
	  if (a[t] == a[t + 5])
	    {
        count+=1;
        break;
	    }
	  else
	    {
    //    printf("TEST1\n");
        break;
	    }
	  /* optional */

	case 1:
	  if (a[t] == a[t + 3])
	    {
        count+=1;
        break;
	    }
	  else
	    {
  //      printf("TEST2\n");
        break;
	    }

	case 2:
	  if (a[t] == a[t + 1] && count ==2)
	    {
	      printf ("GREAT!,THE SERIES YOU HAVE ENTERED IS PALINDROME!\n");
        while(1);
	    }
	  else
	    {
	     // t = 44;
    //   printf("TEST3\n");
        break;
	    }
	default:		/* Optional */
  //  printf("TEST4\n");
    printf
	    ("\nSO SAD 8-( THE SERIES YOU HAVE ENTERED IS NOT PALINDROME!\n::::BYE BYE:::\n");
      while(1);
	}
    }
}


void
main ()
{

  printf
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME WE'RE GOING TO CHECK IF A GIVEN SERIES IS \n <<<< PALINDROME >>>> \n                                                     \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n  ");
  ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   ");
  printf
    ("\n\nREADY?\n Please enter 6 numbers (only numbers) to check! \n >>>: \n\n");

    checkPali(getdata());

  while (1);
}



/*
============================================================================
Correct Output==>__________________________________________________________

||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME WE'RE GOING TO CHECK IF A GIVEN SERIES IS
 <<<< PALINDROME >>>>


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter 6 numbers (only numbers) to check!
 >>>:

1 2 3 3 2 1
GREAT!,THE SERIES YOU HAVE ENTERED IS PALINDROME!


============================================================================
ERROR Output==>__________________________________________________________

||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME WE'RE GOING TO CHECK IF A GIVEN SERIES IS
 <<<< PALINDROME >>>>


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter 6 numbers (only numbers) to check!
 >>>:

5 6 7 7 6 6

SO SAD 8-( THE SERIES YOU HAVE ENTERED IS NOT PALINDROME!
::::BYE BYE:::



ERROR Output 2 invalid input==>__________________________________________________________


||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME WE'RE GOING TO CHECK IF A GIVEN SERIES IS
 <<<< PALINDROME >>>>


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter 6 numbers (only numbers) to check!
 >>>:

1 2 3 g
Error! Only 6 numbers (no chars) are allowed! ..exiting



====>> Bye Bye!<<====
============================================================================
*/
