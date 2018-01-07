/*
============================================================================
Name        :W*W(WWW WWW* HW2.2
Author      :
ID.Number   :
Version     : 0.1
Description :W)WWW 2 - HW02
============================================================================
*/

#include <stdio.h>

void
main ()
{
  int check =
    0, i, j, r, w, t, q, y, u, h, Is, Vs, Xs, Ls, Cs, Ds, Ms, temp0, input1,
    inp0, inp1, inp2, inp3;
  //I = 1 , V = 5,  X = 10,  L = 50,  C = 100,  D = 500,  M = 1000  4567
  //double input1;
  printf
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME TO THE ANCIENT ROMAN CALCULATOR!\n Please enter a number that meets: <= 5000                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   >>>: ");
  check = scanf ("%d", &input1);
  if (input1 <= 5000 && check == 1)
    {
      inp0 = input1 % 1000;	//987
      inp1 = inp0 % 100;	//87
      inp2 = inp1 % 10;		//7
      inp3 = inp2 % 5;		//2

      for (i = 0; i < 8; i++)
	{
	  switch (i)
	    {
	    case 0:
	      Ms = input1 / 1000;
	      //printf("And the result is: %d + %d = %d\n", result);
	      //printf("WE HAVE  %d THOUSANDS IN %d = \n", Ms, input1);
	      break;
	    case 1:
	      Ds = inp0 / 500;

	      break;
	    case 2:
	      Cs = inp0 / 100;

	      break;
	    case 3:
	      Ls = inp1 / 50;

	      break;
	    case 4:
	      Xs = inp1 / 10;

	      break;
	    case 5:
	      Vs = inp2 / 5;

	      break;
	    case 6:
	      Is = inp3 / 1;

	      break;
	    default:
	      //printf("Is=%d Vs=%d Xs=%d Ls=%d Cs=%d Ds=%d Ms=%d\n", Is, Vs, Xs, Ls, Cs,Ds, Ms);
	      printf
		("\nThe number you entered was <<(%d)>> in ROMAN characters is:\n>>>> ",
		 input1);
	      //{char c; while ((c = getchar()) != '\n' && c != EOF); }
	      for (j = 0; j < Ms; j++)
		{
		  //{char c; while ((c = getchar()) != '\n' && c != EOF); }
		  //fflush(stdout);
		  printf ("M");
		}
	      if ((Ds == 1) && (Cs > 5))
		{
		  printf ("D");
		  for (w = 0; w < Cs - 5; w++)
		    {
		      printf ("C");
		    }
		}
	      else if (Ds == 0)
		{
		  for (w = 0; w < Cs; w++)
		    {
		      printf ("C");
		    }
		}
	      if ((Ls == 1) && (Xs > 5))
		{
		  printf ("L");
		  for (t = 0; t < Xs - 5; t++)
		    {
		      printf ("X");
		    }
		}
	      else if ((Ls == 1) && (Xs < 5))
		{
		  printf ("L");
		  for (t = 0; t < Xs; t++)
		    {
		      printf ("X");
		    }
		}
	      else if ((Ls == 0) && (Xs < 5))
		{
		  for (t = 0; t < Xs; t++)
		    {
		      printf ("X");
		    }
		}
	      else if ((Ls == 1) && (Xs == 5))
		{
		  printf ("L");
		}
	      if ((Vs == 1) && (Is > 5))
		{
		  printf ("V");
		  for (u = 0; u < Is - 5; u++)
		    {
		      printf ("I");
		    }
		}
	      else if ((Vs == 1) && (Is < 5))
		{
		  printf ("V");
		  for (u = 0; u < Is; u++)
		    {
		      printf ("I");
		    }
		  printf ("\n\n");
		}
	      else if ((Vs == 0) && (Is < 5))
		{
		  for (u = 0; u < Is; u++)
		    {
		      printf ("I");
		    }
		  printf (" \n\n\n");
		}
	      printf ("\n\n");
	      break;
	    }
	  printf ("\n\n");
	}
      while (1);
    }
  else
    {
      printf
	("Error! you have entered an invalid input, remember only a positive number that meets: X<=5000 is allowed!!\nExiting...\n");
      while (5);
      // break;
    }
}


/*
============================================================================
Correct Output==>__________________________________________________________



||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE ANCIENT ROMAN CALCULATOR!
 Please enter a number that meets: <= 5000

||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: 4323

The number you entered was <<(4323)>> in ROMAN characters is:
>>>> MMMMCCCXXIII




====>> Bye Bye!<<====
============================================================================









============================================================================
Error Output for X> 5000     ==>__________________________________________________________




||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE ANCIENT ROMAN CALCULATOR!
 Please enter a number that meets: <= 5000

||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: 65544

   Error! you have entered an invalid input, remember only a positive number that meets: X<=5000 is allowed!!
   Exiting...




====>> Bye Bye!<<====
============================================================================





============================================================================
Error Output for X != number     ==>__________________________________________________________


||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE ANCIENT ROMAN CALCULATOR!
 Please enter a number that meets: <= 5000

||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: a

   Error! you have entered an invalid input, remember only a positive number that meets: X<=5000 is allowed!!
   Exiting...



====>> Bye Bye!<<====
============================================================================
*/
