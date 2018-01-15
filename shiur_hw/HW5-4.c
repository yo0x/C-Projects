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
#define N 4

void
main ()
{
  int NSarray[N][N] = {
    {1,2,2,0},
    {2,0,3,0},
    {1,3,0,0},
    {0,0,0,1},
  };
  int Sarray[N][N] = {
    {1,2,1,0},
    {2,0,3,0},
    {1,3,0,0},
    {0,0,0,1},
  };
  int i, j, sum1 = 0,sum2, controldi = 9, q, check = 1;
  printf("Welcome, 2 arrays are given%d\n");
  for (i=0;i<N;i++)
  {
      for(j=0;j<N;j++)
      {
        if(NSarray[i][j]!=NSarray[j][i])
        {
          controldi = 0;
        }else
        {
          controldi = 1;
        }
      }

  }//while(1);
  if(controldi==1)
  {
    printf("The array is Simetric\n");
    while(1);
  }else if(controldi==0)
  {
    printf("The array is NOT Simetric\n");
    while(1);
  }
}




/*
============================================================================
Correct Output==>__________________________________________________________


============================================================================
ERROR Output==>__________________________________________________________







====>> Bye Bye!<<====
============================================================================
*/
