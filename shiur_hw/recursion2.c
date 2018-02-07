/*
============================================================================
Name        : Recursion 2
Author      : 
Version     : 0.1
ID.Number   :
Description : Question 2
============================================================================
*/
#include <stdio.h>


int recu_nums(int num_in)
{
  static int stop = 0;
  if(stop>num_in) return 1;
  stop ++;
  recu_nums(num_in/10);
  printf("%d\n", num_in%10);
}


int recu_nums2(int num_in)
{
  if(num_in<0) return 1;
  printf("%d\n", num_in%10);
  if(num_in/10 > 0)
  {
    recu_nums2(num_in/10);
  }
}

void main()
 {
    int num_in1 =0, check = 0;
    printf("Welcome, please enter a number[N]: \n >>> >|:");
    check = scanf("%d", &num_in1);
    if(check==0)
    {
      printf("Invalid input \n");
      while(1);
    }
    printf("Question 1, The digitis in N: \n >>> >|:\n");
    recu_nums(num_in1);
    printf("Question 2, The N Backwards: \n >>> >|:\n");
    recu_nums2(num_in1);
  while(1);
}



/*
============================================================================
 Output==>__________________________________________________________
 Welcome, please enter a number[N]:
  >>> >|:12345
 Question 1, The digitis in N:
  >>> >|:
 1
 2
 3
 4
 5
 Question 2, The N Backwards:
  >>> >|:
 5
 4
 3
 2
 1



ERROR Output==>__________________________________________________________

Welcome, please enter a number[N]:
 >>> >|:qw
Invalid input



====>> Bye Bye!<<====
============================================================================
*/
