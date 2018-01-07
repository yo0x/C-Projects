/*
============================================================================
Name        :תרגיל בית HW1.5
Author      :
Version     : 0.1
ID.Number   :
Description : שאלה4
============================================================================
*/

#include <stdio.h>
#include <math.h>

void main()
{
  double lside, sside, slant, area, ratio, result, cslant;
  int input_check;
  printf("\n\n\n\n\n\n\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n|||Welcome, please enter the value of the two sides of a simple rectangle, in the form (Y>=X)|||\n|||First enter the value for the long side and then the small one:                           |||\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\t\t\tEnter the Y and then X: (REMEMBER Y>=X) >>>\n");
  input_check = scanf("%lf%lf", &lside, &sside);
  if (sside > lside ^ input_check==1)
  {
    printf("|||||||||||ERROR||You have entered and invalid input, make sure you entered the long side first and try again!|||||||||||ERROR||\n");

  }
  else if(input_check == 0)
  {
    printf("|||||||||||ERROR!! You have entered only Charatchters Please enter only numbers and follow the instructions!|||||||||||\n");
  }
  else
  {
    cslant = lside*lside+sside*sside;//חישוב הלכסון
    slant = sqrt(cslant);//חישוב הלכסון
    ratio = sside/2;//חישוב R
    area = M_PI*ratio*ratio;//חישוב שטח
    result = slant/area;
    printf("\n\n\n\n\n\n\n\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n|||The proportion between the slant of the rectangle and the area of the circule inside of it is :|||\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n \n\t\t>>>>>>>  >>%lf<<  <<<<<<<\n", result);
  }
 while(5);
}

/*
============================================================================
Correct Output==>__________________________________________________________

||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||Welcome, please enter the value of the two sides of a simple rectangle, in the form (Y>=X)|||
|||First enter the value for the long side and then the small one:                           |||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
			Enter the Y and the X: (REMEMBER Y>=X) >>>
1233
123






|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||The proportion between the slant of the rectangle and the area of the circule inside of it is :|||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

		>>>>>>>  >>0.104283<<  <<<<<<<



ERROR Output==>__________________________________________________________



||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||Welcome, please enter the value of the two sides of a simple rectangle, in the form (Y>=X)|||
|||First enter the value for the long side and then the small one:                           |||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
			Enter the X and the Y: (REMEMBER Y>=X) >>>
t
|||||||||||ERROR||You have entered and invalid input, make sure you entered the long side first and try again!|||||||||||ERROR||


====>> Bye Bye!<<====
============================================================================
*/
