

#include <stdio.h>
#define X 4
#define  Y 5

void
main ()
{
  int NSarray[X][Y] = {
    {-3,4,5,6,2},
    {10,-9,2,5,1},
    {7,3,-6,2,-5},
    {2,21,5,3,4},
  };
  int i, j,o,t,u,k,n,q,max=0, sum1 = 0,sum2 = 0, search, controldi = 9, check = 1;
  printf("Welcome, 1 array was given\n\n");
  max = NSarray[0][0];
  for (i=0;i<X;i++)
  {
      for(j=0;j<Y;j++)
      {

              if (NSarray[i][j] > max)
          {
            max = NSarray[i][j];
          }
          sum2+= NSarray[i][j];
          sum1+= NSarray[i][j];
      }
  //    printf("%d\n",NSarray[i][j]);
      printf("Average of row %d is:%.1f\n",i,(float)sum1/Y);
      sum1 = 0;



  }//while(1);
  //++++++++++++++++++++++++++++++++++++++++++++++++++++++++=
  sum2 = 0;
  printf("Max num is: %d \n", max);
  printf("Sum of Array is %d\n", sum2);
  for (i=0;i<Y;i++)
  {
      for(j=0;j<X;j++)
      {

        sum2 =sum2 + NSarray[j][i];
      //  printf("Sum of column %d is : %d\n", i, sum2);

      }
      printf("Sum of column %d is : %d\n", i, sum2);
      sum2 = 0;


  }
  printf("Please enter a number: \n");
  scanf("%d", &search);//while(1);
  for (i=0;i<X;i++)
  {
      for(j=0;j<Y;j++)
      {
        if(search == NSarray[i][j])
        {
          printf("The Number %d was found in array[%d][%d]\n", search, i,j);
        }else
        {
          printf("The Number %d was not found! in array[%d][%d] \n", search,i,j);
        }

      }



  }
  while(1);
}
