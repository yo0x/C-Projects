/*
============================================================================
Name        : HW6.7
Author      :
Version     : 0.1
ID.Number   : -
            : -
Description : Question 6.7
============================================================================
*/


#include <stdio.h>
#include <limits.h>
#define N 6
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

void input_arr (float *num)
{
  int i, check;
  float tem_array[N];
    printf("\n\nREADY?\n Please enter 6 numbers: \n >>>: \n\n");
    for (i=0; i<N; i++)
    {
    check = scanf("%f", &tem_array[i]);
    num[i] = tem_array[i];
    if (check !=1)
    {
      printf("ERROR!Invalid input!\n");
      while(1);
    }
  }
}

int print_arr(float arra_p[N], int arr_len)
{
  int i, s;
  printf("The series you entered is: \n");

  for (i=0; i<arr_len; i++)
  {
    printf("%.2f ", arra_p[i]);
  }
//  arr_len = NELEMS(arra_p);

}

void arr_maxmin (float *arr_max, float *arr_min, float array[N])
{
   float max = array[0], min = array[0];
   int i;
   for (i = 0; i<N; i++)
   {
     if(array[i]>max)
     {
       max = array[i];
     }
     if(array[i]<min)
     {
       min = array[i];
     }
   }
   *arr_max = max;
   *arr_min = min;

}

void
main ()
{
    float arr_in[N], *parray, arr_len1, arr_max1, arr_min1;
    //in_num = *a_num;

    printf ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME, \n ENTER A SERIES AND HERE IS WHAT WE'LL DO:\n 1- RETURN THE SERIES ;)\n 2- RETURN MAX VALUE \n 3- RETURN MIN VALUE \n                                                        \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n  ");
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   ");
      //double e;
    input_arr(arr_in);
    print_arr(arr_in, 6);
    arr_maxmin(&arr_max1, &arr_min1, arr_in);
    printf("\n\nThe MAX VALUE IS: %.2f \n", arr_max1);
    printf("\nThe MIN VALUE IS: %.2f \n", arr_min1);


  while (1);
}



/*
============================================================================
 Output==>__________________________________________________________

 ||||||||||||||||||||||||||||||||||||||||||||||||||||||
  WELCOME,
  ENTER A SERIES AND HERE IS WHAT WE'LL DO:
  1- RETURN THE SERIES ;)
  2- RETURN MAX VALUE
  3- RETURN MIN VALUE

 ||||||||||||||||||||||||||||||||||||||||||||||||||||||


 READY?
  Please enter 6 numbers:
  >>>:

 54.3 12.1 55.55 87.88 5.4 5.6
 The series you entered is:
 54.30 12.10 55.55 87.88 5.40 5.60

 The MAX VALUE IS: 87.88

 The MIN VALUE IS: 5.40



ERROR Output==>__________________________________________________________

||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME,
 ENTER A SERIES AND HERE IS WHAT WE'LL DO:
 1- RETURN THE SERIES ;)
 2- RETURN MAX VALUE
 3- RETURN MIN VALUE

||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter 6 numbers:
 >>>:

2 3 4 f
ERROR!Invalid input!


====>> Bye Bye!<<====
============================================================================
*/
