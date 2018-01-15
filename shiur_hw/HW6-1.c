/*
============================================================================
Name        :תרגיל בית HW6.1
Author      :
Version     : 0.1
ID.Number   : 
Description : Question 6.1
============================================================================
*/


#include <stdio.h>

int prod(int a, int d, int i)
{
  int l, erishon;
  erishon = (a +(i - 1)*d);
  return erishon;
}

int sum(int a, int d, int i)
{
  int sumi, sum1;
  sum1 = prod(a,d,i);
  sumi = (i*(a + sum1)/2);
  return sumi;
}

void
main ()
{

  int q, a,d, check, fsum;
  printf ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME WE'RE GOING TO PLAY WITH SERIES: \n HERE IS WHAT WE'LL DO:\n 1- RETURN THE MEMBER i OF THE SERIES\n 2- RETURN THE SUM UNTIL i \n                                                    \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n  ");
  ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   ");
	  //double e;
  printf("\n\nREADY?\n Please enter the: \n 1- First number of the series\n 2- The common difference of successive members\n 3- The desiere place i in the series: \n >>>: \n\n");
  check = scanf("%d%d%d", &a,&d,&q);
  if (check!=3)
  {
    printf("Error! Only 3 Numbers are allowed! ..exiting\n");
    while(1);
  }else
  {
    fsum = sum(a,d,q);
    printf("\nThe member i in the series is:||> %d <||\nand the SUM until that place in the SERIES is: ||> %d <||\n::::BYE BYE:::\n", prod(a,d,q), fsum);
      while(1);
  }

}



/*
============================================================================
Correct Output==>__________________________________________________________


||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME WE'RE GOING TO PLAY WITH SERIES:
 HERE IS WHAT WE'LL DO:
 1- RETURN THE MEMBER i OF THE SERIES
 2- RETURN THE SUM UNTIL i


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter the:
 1- First number of the series
 2- The common difference of successive members
 3- The desiere place i in the series:
 >>>:

2 2 3

The member i in the series is:||> 6 <||
and the SUM until that place in the SERIES is: ||> 12 <||
::::BYE BYE:::


============================================================================
ERROR Output==>__________________________________________________________


||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME WE'RE GOING TO PLAY WITH SERIES:
 HERE IS WHAT WE'LL DO:
 1- RETURN THE MEMBER i OF THE SERIES
 2- RETURN THE SUM UNTIL i


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter the:
 1- First number of the series
 2- The common difference of successive members
 3- The desiere place i in the series:
 >>>:

2 2 r
Error! Only 3 Numbers are allowed! ..exiting



====>> Bye Bye!<<====
============================================================================
*/
