/*
============================================================================
Name        :תרגיל בית HW5.2
Author      :
Version     : 0.1
ID.Number   :
Description : Question 5.2
============================================================================
*/


#include <stdio.h>
#define N 8

void
main ()
{
  int array[N], Narray[N];
  int i, o, t, sum1 = 0,sum2, controldi, q, check = 1;

	  printf ("WELCOME, PLEASE ENTER YOUR ID (WITHOUT THE CONTROL DIGIT).\n WE WILL CALCULATE THE CONTROL DIGIT FOR YOU:\n >>>> >: ");
	  //double e;


      for (i = 0; i < N; i++)
  	    {
  	      //printf ("Please enter value for the array[%d]:\n", i);
        Narray[i]=0;
        check = scanf ("%d", &array[i]);
        if(array[i]<0 || array[i]/10!=0)
        {
          printf("\n\t >ERROR! Invalid input! Enter only 1 positive digit at the time!\n\t >try again.\n\t\t>>EXITING..\n");
          while(1);
        }
  	     if(check==0)
         {
           printf("\n\tERROR! Invalid input! Enter only numbers! try again.\n\t\tEXITING..\n");
           break;
         } //printf ("You entered the value for array[%d] = %d: \n\n", i,
  		    // array[i];
  	    }
        if(check==0)
        {
          while(1);
        }
        for(o = 1; o<N;o++)
        {
          if(o%2!=0 || o==1)
          {
            Narray[o]=array[o]*2;
            if(Narray[o]/10!=0)
            {
              Narray[o] = Narray[o]/10 + Narray[o]%10;
            }
          }else
          {
            Narray[o] = array[o];
          }
          Narray[0]=array[0];
        }
        for (q = 0; q < N; q++)
      	    {

      		  //  sum1 = array[q];
      		  sum1 += Narray[q];

      	    }
          sum2 = sum1;
        if(sum1%10==0)
        {
          controldi = 0;
        }else
        {
          for(o = 0;o<10;o++)
          {
            sum1 += 1;
            if(sum1%10==0)
            {
              break;
            }
          }
          controldi = sum1 - sum2;
        }
        printf("Your ID Number with the control digit is :\n >>>>>: ");
        for(t=0; t<N; t++)
        {
          printf("%d",array[t]);
        }
        printf("%d\n",controldi);
        if(check==0)
        {
          while(1);
        }
    while(1);
}



/*
============================================================================
Correct Output==>__________________________________________________________

WELCOME, PLEASE ENTER YOUR ID (WITHOUT THE CONTROL DIGIT).
 WE WILL CALCULATE THE CONTROL DIGIT FOR YOU:
 >>>> >: 1
2
3
4
5
6
7
8
Your ID Number with the control digit is :
 >>>>>: 123456782



============================================================================
ERROR Output==>__________________________________________________________

WELCOME, PLEASE ENTER YOUR ID (WITHOUT THE CONTROL DIGIT).
 WE WILL CALCULATE THE CONTROL DIGIT FOR YOU:
 >>>> >: 2
3
4
f

	ERROR! Invalid input! Enter only numbers! try again.
		EXITING..



_________________ERROR OUTPUT WHEN INPUT NEGATIVE OR MORE THAN ONE DIGIT AT THE TIME!!


WELCOME, PLEASE ENTER YOUR ID (WITHOUT THE CONTROL DIGIT).
 WE WILL CALCULATE THE CONTROL DIGIT FOR YOU:
 >>>> >: 34

	 >ERROR! Invalid input! Enter only 1 positive digit at the time!
	 >try again.
		>>EXITING..





====>> Bye Bye!<<====
============================================================================
*/
