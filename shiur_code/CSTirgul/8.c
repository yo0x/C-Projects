

#include <stdio.h>
#define N 7

void
main ()
{
  int array[N];
  int i, e = 1, a, w, t, o, max, min, sum1 = 0, sum2, q;
  for (w = 0; w < 4; w++)
    {
      if (w == 0)
	{
	  printf ("QUESTION 1: \n");

	  //double e;
	  for (i = 0; i < N; i++)
	    {
	      e = e * 2;
	      array[i] = e;
	      printf ("%d\n", array[i]);
	    }
	}
      else if (w == 1)
	{
	  printf ("QUESTION 2: \n");
	  //double e;
	  for (i = 0; i < N; i++)
	    {
	      if (i % 2 == 0)
		{
		  array[i] = 1;
		  printf ("%d\n", array[i]);
		}
	      else
		{
		  array[i] = 0;
		  printf ("%d\n", array[i]);
		}

	    }
	}
      else if (w == 2)
	{
	  printf ("QUESTION 3: \n");
	  //double e;
	  for (i = 0; i < N; i++)
	    {
	      printf ("Please enter value for the array[%d]:\n", i);
	      scanf ("%d", &array[i]);
	      printf ("You entered the value for array[%d] = %d: \n\n", i,
		      array[i]);
	      if (array[i] < 0)
		{
		  printf ("The value of array[%d] is NEGATIVE = %d\n", i,
			  array[i]);
		}
	    }
	  max = array[0];
	  min = array[0];

	  for (o = 0; o < N; o++)
	    {
	      if (array[i] > max)
		{
		  max = array[i];
		}
	      if (array[i] < min)
		{
		  min = array[i];
		}
	    }
	  //    printf("THE MAX NUMBER IS: %d\n", max);
	  printf ("THE MIN NUMBER IS: %d\n", min);
	  printf ("THE ARRAY FROM THE END TO THE BEGining:\n");
	  for (i = N; i > 0; i--)
	    {
	      printf ("%d\n", array[i]);
	    }
	  for (q = 0; q < N; q++)
	    {
	      if (q % 2 == 0)
		{
		  //  sum1 = array[q];
		  sum1 += array[q];

		}
	    }
	  printf ("The sum of the even index is: %d\n", sum1);
	}



    }

  while (1);
}
