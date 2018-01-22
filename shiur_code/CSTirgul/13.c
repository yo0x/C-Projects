

#include <stdio.h>
#define X 4
#define  Y 5

void
main ()
{
  int array[X] = {1,2,3};
  int b = 10;
  int * q;

  //q = &b;
  //*q = 200;
  q = arr;
  //q = &arr[3];
  //index
  for(i = 0; i< N; i++)
  {
    printf("%5d\n", array[i] );
  }
  //index+pointer
  for(i = 0; i< N; i++)
  {
    printf("%5d\n", *(array + i) );
  }
  //index+pointer q
  for(i = 0; i< N; i++)
  {
    printf("%5d\n", *(q + i) );
  }
  //pointer q
    for(i = 0; i< N; i++)
    {
      printf("%5d\n", *(q) );
      q++;

    }



  while(1);
}





void input(int array1[N])
{
    
}
