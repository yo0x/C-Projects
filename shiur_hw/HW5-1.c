/*
============================================================================
Name        :תרגיל בית HW2.1
Author      :
Version     : 0.1
ID.Number   :
Description : שאלה4
============================================================================
*/


#include <stdio.h>
#define N 10

void
main ()
{
  int array[N];
  int i, o, max, min, sum1 = 0, sum2, q, check = 1;

	  printf ("WELCOME, PLEASE ENTER 10 NUMBERS FOR THE ARRAY.\n WE WILL:\n A- Sum them\n B- Find the MIN \n C- Find Average\n>>>> >: ");
	  //double e;


      for (i = 0; i < N; i++)
  	    {
  	      //printf ("Please enter value for the array[%d]:\n", i);
  	    check = scanf ("%d", &array[i]);
  	     if(check==0)
         {
           printf("\n\tERROR! Invalid input! try again.\n\t\tEXITING..\n");
           break;
         } //printf ("You entered the value for array[%d] = %d: \n\n", i,
  		    // array[i];
  	    }
        if(check==0)
        {
          while(1);
        }
    for (q = 0; q < N; q++)
  	    {

  		  //  sum1 = array[q];
  		  sum1 += array[q];

  	    }
  	  printf ("A - THE ARRAY'S SUM IS: %d\n", sum1);
	  //    printf("THE MAX NUMBER IS: %d\n", max);
    min = array[0];

    for (o = 0; o < N; o++)
      {
        if (array[o] < min)
    {
      min = array[o];
    }
      }
	  printf ("B -THE MIN NUMBER IN THE ARRAY IS: %d\n", min);
	  printf ("C - THE ARRAY'S AVARAGE IS: %f\n", (float)sum1/N);
    while (1);

  printf("Error! please enter only numbers, ten of them ;) ...\n");


  while (1);
}



/*
============================================================================
Correct Output==>__________________________________________________________


WELCOME, PLEASE ENTER 10 NUMBERS FOR THE ARRAY.
 WE WILL:
 A- Sum them
 B- Find the MIN
 C- Find Average
>>>> >: 2
3
-4
5
67
77
5
4
67
6
A - THE ARRAY'S SUM IS: 232
B -THE MIN NUMBER IN THE ARRAY IS: -4
C - THE ARRAY'S AVARAGE IS: 23.200001



============================================================================
ERROR Output==>__________________________________________________________





WELCOME, PLEASE ENTER 10 NUMBERS FOR THE ARRAY.
 WE WILL:
 A- Sum them
 B- Find the MIN
 C- Find Average
>>>> >: g

	ERROR! Invalid input! try again.
		EXITING..






====>> Bye Bye!<<====
============================================================================
*/
