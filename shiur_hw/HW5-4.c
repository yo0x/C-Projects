/*
============================================================================
Name        :תרגיל בית HW5.4
Author      : יהונתן אורוזקו
Version     : 0.1
ID.Number   : 336182217
Description : Question 5.4
============================================================================
*/


#include <stdio.h>
#define N 4

int checkSi(int NSarray[N][N])
{
  int i, j, sum1 = 0,sum2, controldi = 0;
  for (i=0;i<N;i++)
  {
      for(j=0;j<N;j++)
      {
        if(NSarray[i][j]!=NSarray[j][i])
        {
          //printf("test1 %d\n", NSarray[j][i]);
          controldi = 0;
        }else
        {
        //printf("else2\n");

          controldi += 1;
        }
      }

  }//while(1);
  if(controldi==16)
  {
    printf("\nThis array is Simetric\n");
//    while(1);
  }else
  {
    printf("\nThis array is NOT Simetric\n");
  //  while(1);
  }
}


void
main ()
{
   int array1[N][N] = {
    {1,2,1,0},
    {2,0,3,0},
    {1,3,0,0},
    {0,0,0,1},
  };
   int array2[N][N] = {
    {1,2,2,0},
    {2,0,3,0},
    {1,3,0,0},
    {0,0,0,1},
  };
  //int i, j, sum1 = 0,sum2, controldi = 9, q, check = 1;
  printf
  ("Welcome, 2 arrays are given: \n\nArray 1\n{1,2,1,0},\n{2,0,3,0},\n{1,3,0,0},\n{0,0,0,1}\n");
  checkSi(array1);
  printf("\n\nArray 2\n\n{1,2,2,0},\n{2,0,3,0},\n{1,3,0,0},\n{0,0,0,1}\n");
  checkSi(array2);
  //printf("%d\n", array1);
  while(1);
}




/*
============================================================================
Correct Output==>__________________________________________________________

Welcome, 2 arrays are given:

Array 1
{1,2,1,0},
{2,0,3,0},
{1,3,0,0},
{0,0,0,1}

This array is Simetric


Array 2

{1,2,2,0},
{2,0,3,0},
{1,3,0,0},
{0,0,0,1}

This array is NOT Simetric



============================================================================
ERROR Output==>__________________________________________________________







====>> Bye Bye!<<====
============================================================================
*/
