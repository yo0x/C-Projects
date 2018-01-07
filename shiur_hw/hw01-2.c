/*
============================================================================
Name        :hw01 שאלה 2
Author      :
Version     : 0.1
ID.Number   :
Description :שאלה 2 hw01
============================================================================
*/

#include <stdio.h>



void main(){
  char vuserin, vuserin2;
  int vdiff, n1, n2;
  printf("\n Welcome, Please enter two characters and press -ENTER- \n I'll tell you the ASCII difference (the absolute value) betwen them: \n");
  vuserin = getchar();
  vuserin2 = getchar();
  printf(" Your first letter is: %c\n Your second letter is: %c", vuserin, vuserin2);
  n1 = vuserin;
  n2 = vuserin2;
  vdiff = abs(n1 - n2);
  printf("\n And the ASCII difference is: %d \n====>> Bye Bye!<<====\n", vdiff);
 while(5);
}

/*
============================================================================
Output==>



Welcome, Please enter two characters and press -ENTER-
 I'll tell you the ASCII difference (the absolute value) betwen them:
 7@
 Your first letter is: 7
 Your second letter is: @
 And the ASCII difference is: 9

====>> Bye Bye!<<====





============================================================================
*/
