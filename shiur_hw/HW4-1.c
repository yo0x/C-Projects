/*
============================================================================
Name        :תרגיל בית HW4.1
Author      :
ID.Number   :
Version     : 0.1
Description :שאלה1 - HW04
============================================================================
*/

#include <stdio.h>

void
main ()
{
  int check = 0, num1, check1, i, input1, inp0;
  printf
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME TO THE NUMBER CHANGER PROGRAM!\n PLEASE SELECT YOUR COMPANY:\n 0 = PELEPHONE\n 1 = CELLCOM \n 2 = PARTNER \n 3 = MIRS\n                                                   \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   >>>: ");
  ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   >>>: ");

  check = scanf ("%d", &input1);
  if (check == 1)
    {
      switch (input1)
	{
	case 0:
	  printf
	    ("\nYOU HAVE CHOSEN THE PELEPHONE COMPANY!\n ENTER YOUR PELEPHONE NUMBER:\n  (050, 051, 056, 068) >>>: ");
	  check1 = scanf ("%d", &inp0);
	  if (check1 != 0)
	    {
	      if ((inp0 / 10000000) == 50)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PELEPHONE COMPANY IS: 050-5%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 51)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PELEPHONE COMPANY IS: 050-7%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 56)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PELEPHONE COMPANY IS: 050-6%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 68)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PELEPHONE COMPANY IS: 050-8%d\n",
		     num1);
		}
	      else
		{
		  printf
		    ("Error! please enter only your phone number in the form: 05xxxxxxx\n");
		}
	    }

	  break;
	case 1:
	  printf
	    ("\nYOU HAVE CHOSEN THE CELLCOM COMPANY!\n ENTER YOUR CELLCOM NUMBER:\n (052, 053, 058, 064, 065)  >>>: ");
	  check1 = scanf ("%d", &inp0);
	  if (check1 != 0)
	    {
	      if ((inp0 / 10000000) == 52)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN CELLCOM COMPANY IS: 052-2%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 53)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN CELLCOM COMPANY IS: 053-3%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 58)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN CELLCOM COMPANY IS: 052-8%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 64)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN CELLCOM COMPANY IS: 052-4%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 65)
		{
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN CELLCOM COMPANY IS: 052-5%d\n",
		     num1);
		}
	      else
		{
		  printf
		    ("Error! please enter only your phone number in the form: 05xxxxxxx\n");
		}
	    }
	  break;
	case 2:
	  printf
	    ("\nYOU HAVE CHOSEN THE PARTNER COMPANY!\n ENTER YOUR PARTNER NUMBER:\n  (054, 055, 066, 067) >>>: ");
	  check1 = scanf ("%d", &inp0);
	  if (check1 != 0)
	    {
	      if ((inp0 / 10000000) == 54)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PARTNER COMPANY IS: 054-4%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 55)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PARTNER COMPANY IS: 054-5%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 66)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PARTNER COMPANY IS: 054-6%d\n",
		     num1);
		}
	      else if ((inp0 / 10000000) == 67)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN PARTNER COMPANY IS: 054-7%d\n",
		     num1);
		}
	      else
		{
		  printf
		    ("Error! please enter only your phone number in the form: 05xxxxxxx\n");
		}
	    }
	  break;
	case 3:
	  printf
	    ("\nYOU HAVE CHOSEN THE MIRS COMPANY!\n ENTER YOUR MIRS NUMBER:\n  (057) >>>: ");
	  check1 = scanf ("%d", &inp0);
	  if (check1 != 0)
	    {
	      if ((inp0 / 10000000) == 57)
		{
		  num1 = inp0 % 1000000;
		  printf
		    ("\nYOUR NEW NUMBER PHONE IN MIRS COMPANY IS: 057-7%d\n",
		     num1);
		}
	      else
		{
		  printf
		    ("Error! please enter only your phone number in the form: 05xxxxxxx\n");
		}
	    }
	  break;


	default:
	  //printf("Is=%d Vs=%d Xs=%d Ls=%d Cs=%d Ds=%d Ms=%d\n", Is, Vs, Xs, Ls, Cs,Ds, Ms);
	  printf ("\nError! Please enter a valid COMPANY option.\n>>>> ");
	  //{char c; while ((c = getchar()) != '\n' && c != EOF); }
	  while (5);
	  // break;
	}

    }
  else
    {
      printf ("\nError! Please enter a valid COMPANY option.\n>>>> ");
    }
  while (1);
}



/*
Correct Output=============================================================================
=>__________________________________________________________

||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE NUMBER CHANGER PROGRAM!
 PLEASE SELECT YOUR COMPANY:
 0 = PELEPHONE
 1 = CELLCOM
 2 = PARTNER
 3 = MIRS


||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: 2

YOU HAVE CHOSEN THE PARTNER COMPANY!
 ENTER YOUR PARTNER NUMBER:
  (054, 055, 066, 067) >>>: 0671234567

YOUR NEW NUMBER PHONE IN PARTNER COMPANY IS: 054-7234567




====>> Bye Bye!<<====
============================================================================






Error Output  ==>__________________________________________________________


||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE NUMBER CHANGER PROGRAM!
 PLEASE SELECT YOUR COMPANY:
 0 = PELEPHONE
 1 = CELLCOM
 2 = PARTNER
 3 = MIRS


||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: f

Error! Please enter a valid COMPANY option.








||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME TO THE NUMBER CHANGER PROGRAM!
 PLEASE SELECT YOUR COMPANY:
 0 = PELEPHONE
 1 = CELLCOM
 2 = PARTNER
 3 = MIRS


||||||||||||||||||||||||||||||||||||||||||||||||||||||
   >>>: 2

YOU HAVE CHOSEN THE PARTNER COMPANY!
 ENTER YOUR PARTNER NUMBER:
  (054, 055, 066, 067) >>>: 345730
Error! please enter only your phone number in the form: 05xxxxxxx


====>> Bye Bye!<<====
============================================================================


*/
