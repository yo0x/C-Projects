/*
============================================================================
Name        : HW6.4
Author      :
Version     : 0.1
ID.Number   :
Description : Question 6.4
============================================================================
*/


#include <stdio.h>
#include <limits.h>


void input (int *num)
{
    int check, num1;
    check = scanf("%d", &num1);
    if (check!=1)
    {
      printf("\n >ERROR! Invalid input!!\n >try again.\n>>EXITING..\n");
      while(1);
    }else
    {
      *num = num1;
      //printf("test! %x\n", &num);
      //printf("test! %x\n", &num1);
    }
  //  *num = &num1;

}

void count_num (int num, int *count)
{
  int r = 1;
    if (num < 0) num = (num == INT_MIN) ? INT_MAX: -num;
    while (num > 9) {
        num /= 10;
        r++;
    }
    *count = r;
}

int reverse_odd_even (int num, int count, int *reverse)
{
      int reversedNumber = 0, remainder1;
      while(num != 0)
     {
         remainder1 = num%10;
         reversedNumber = reversedNumber*10 + remainder1;
         num /= 10;
     }
     *reverse = reversedNumber;

      if(count%2 == 0)
      {
        return 1;
      }else
      {
        return 0;
      }

}

void
main ()
{
    int in_num = 0, a_num, lennum, p_lennum, even_num, re_num,out_count;
    //in_num = *a_num;

    printf ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME, \n ENTER A NUMBER AND HERE IS WHAT WE'LL DO:\n 1- RETURN THE NUMBER ;)\n 2- RETURN NUMBER OF DIGITS \n 3- TELL YOU IF IT'S EVEN OR NOT \n 4- RETURN THE REVERSE NUMBER \n                                              \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n  ");
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   ");
      //double e;
    printf("\n\nREADY?\n Please enter a number: \n >>>: \n\n");
    input(&a_num);
    in_num = a_num;
    printf("The number you entered is: %d\n\n", a_num);
    count_num(in_num, &p_lennum);
    out_count = p_lennum;
    printf("The number has %d digits.\n\n", p_lennum);
    even_num = reverse_odd_even(in_num, out_count, &re_num);
    if(even_num == 1)
    {
      printf("The number you entered is EVEN\n");
    }else
    {
      printf("The number you entered is NOT EVEN\n");
    }
    printf("The REVERSE number is: %d \n exiting... BYE BYE!\n\n", re_num);
  while (1);
}



/*
============================================================================
 Output==>__________________________________________________________



 ||||||||||||||||||||||||||||||||||||||||||||||||||||||
  WELCOME,
  ENTER A NUMBER AND HERE IS WHAT WE'LL DO:
  1- RETURN THE NUMBER ;)
  2- RETURN NUMBER OF DIGITS
  3- TELL YOU IF IT'S EVEN OR NOT
  4- RETURN THE REVERSE NUMBER


 ||||||||||||||||||||||||||||||||||||||||||||||||||||||


 READY?
  Please enter a number:
  >>>:

 12345
 The number you entered is: 12345

 The number has 5 digits.

 The number you entered is NOT EVEN
 The REVERSE number is: 54321
  exiting... BYE BYE!











ERROR OUTPUT___________________________________________________




||||||||||||||||||||||||||||||||||||||||||||||||||||||
 WELCOME,
 ENTER A NUMBER AND HERE IS WHAT WE'LL DO:
 1- RETURN THE NUMBER ;)
 2- RETURN NUMBER OF DIGITS
 3- TELL YOU IF IT'S EVEN OR NOT
 4- RETURN THE REVERSE NUMBER


||||||||||||||||||||||||||||||||||||||||||||||||||||||


READY?
 Please enter a number:
 >>>:

sdfsd

 >ERROR! Invalid input!
 >try again.
>>EXITING..












====>> Bye Bye!<<====
============================================================================
*/
