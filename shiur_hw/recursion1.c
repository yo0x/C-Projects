/*
============================================================================
Name        : Recursion 1
Author      :
Version     : 0.1
ID.Number   :
Description : Question 1
============================================================================
*/
#include <stdio.h>

int recu_nums(int num_in)
{
  static int stop = 0;
  printf("%d\n", stop);
  stop ++;
  if(stop>num_in) return 1;
  return recu_nums(num_in);
}

int recu_nums2(int num_in)
{
  if(num_in <0) return 1;
  printf("%d\n", num_in);
  return recu_nums2(num_in-1);
}

void main()
 {
    int num_in1 =0, check = 0;
    printf("Welcome, please enter a number[N]: \n >>> >|:");
    check = scanf("%d", &num_in1);
    if(check==0)
    {
      printf("Invalid input\n");
      while(1);
    }
    printf("Question 1, number from 0 to N: \n >>> >|:\n");
    recu_nums(num_in1);
    printf("Question 2, number from N to 0: \n >>> >|:\n");
    recu_nums2(num_in1);
  while(1);
}



/*
============================================================================
 Output==>__________________________________________________________


 Welcome, please enter a number[N]:
  >>> >|:12
 Question 1, number from 0 to N:
  >>> >|:
 0
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
 Question 2, number from N to 0:
  >>> >|:
 12
 11
 10
 9
 8
 7
 6
 5
 4
 3
 2
 1
 0



====>> Bye Bye!<<====
============================================================================
*/
