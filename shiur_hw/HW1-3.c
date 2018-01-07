/*
============================================================================
Name        :תרגיל בית Hs.3
Author      :ss
Version     : 0.1
ID.Number   :ss
Description : שאלה3
============================================================================
*/

#include <stdio.h>

void main()
{
  int input1,input2,input3,input4,input5,input6, ponum = 0, negnums = 0, check;
  printf("Please enter 6 integers, positives and negatives: \n");
  check = scanf("%d %d %d %d %d %d",&input1,&input2,&input3,&input4,&input5,&input6);

  if (check<6)
  {
    printf("!!!ERROR!!!! You have entered an invalid Digit! Please enter only 6 integers.\n");
  }
    else if(check==6)
    {
      if (input1<0)
      {
        negnums +=1;
      }
      else
      {
          ponum +=1;
      }
      if (input2<0)
         {
        negnums +=1;
         }
      else
         {
        ponum +=1;
         }
      if (input3<0)
      {
        negnums +=1;
      }
      else
         {
        ponum +=1;
         }
      if (input4<0)
      {
        negnums +=1;
      }
      else
         {
        ponum +=1;
         }
      if (input5<0)
      {
        negnums +=1;
      }
      else
         {
        ponum +=1;
         }
      if (input6<0)
      {
        negnums +=1;
      }
      else
         {
        ponum +=1;
         }
         printf("There were %d positive numbers and %d negative numbers.\n", ponum, negnums);
      }
      while(1);
}

/*
==============================================================================>
:::::::::::::::::::::Output when input is valid: ::::::::::::::::::::::::::::


Please enter 6 integers, positives and negatives:
1 2 3 -4 -5 -6
There were 3 positive numbers and 3 negative numbers.


:::::::::::::::::::::Output when input is invalid: ::::::::::::::::::::::::::::


Please enter 6 integers, positives and negatives:
a s d 1 2 3
!!!ERROR!!!! You have entered an invalid Digit! Please enter only 6 integers.




====>> Bye Bye!<<====
============================================================================
*/
