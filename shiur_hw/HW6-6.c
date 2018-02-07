/*
============================================================================
Name        : HW6.6
Author      :
Version     : 0.1
ID.Number   :
Description : Question 6.6
============================================================================
*/


#include <stdio.h>
#include <limits.h>


void
input_arr (char *str_in, char *strcpyout)
{
  char test[CHAR_MAX] = { 0 };
  printf ("\n\nREADY?\n Please enter a STRING: \n >>>: \n\n");
  fgets (test, CHAR_MAX, stdin);
  strcpy (strcpyout, test);
  strcpy (str_in, test);
}




void
print_arr (char arra_p[], char *new_str)
{
  int j, t = 0;
  char tem_array[CHAR_MAX], i;
  for (i = 0; arra_p[i] != '\0'; ++i);
  for (j = 0; j < i; j++)
    {
      if ((arra_p[j] > 47 && arra_p[j] < 58) || arra_p[j] == 32)
	{
	  t += 1;
	}
      else
	{
	  new_str[j - t] = tem_array[j];
	}
    }




}



void
main ()
{
  char arr_in[CHAR_MAX] = { 0 }, arr_out[CHAR_MAX]={0}, str_cp[CHAR_MAX]={0};

  printf
    ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n WELCOME, \n ENTER A STRING AND HERE IS WHAT WE'LL DO:\n 1- RETURN THE STRING ;)\n 2- RETURN THE STRING WITH NO NUMBERS OR SPACES\n                                                         \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n  ");
  ("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n :\n                                                  \n                           \n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n   ");
  input_arr (&arr_in, &str_cp);
  print_arr (arr_in, &arr_out);
  printf ("\n\nThe string you entered was:\n %s \n", str_cp);
  printf ("\n\nThe new string is: \n %s \n", arr_out);

  while (1);
}



/*
============================================================================
 Output==>__________________________________________________________

 ||||||||||||||||||||||||||||||||||||||||||||||||||||||
  WELCOME,
  ENTER A STRING AND HERE IS WHAT WE'LL DO:
  1- RETURN THE STRING ;)
  2- RETURN THE STRING WITH NO NUMBERS OR SPACES

 ||||||||||||||||||||||||||||||||||||||||||||||||||||||


 READY?
  Please enter a STRING:
  >>>:

 123 Makore Sasson Hakol 10 ?


 The string you entered was:
  123 Makore Sasson Hakol 10 ?



 The new string is:
  MakoreSassonHakol?



====>> Bye Bye!<<====
============================================================================
*/
