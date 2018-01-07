/*
============================================================================
Name        :תרגיל בית HW1.4
Author      :
Version     : 0.1
ID.Number   :
Description : שאלה4
============================================================================
*/

#include <stdio.h>

void main(){
  int id_number1,id_number2,id_number3;
  float hight_student1, weight_student1, hight_student2, weight_student2, hight_student3, weight_student3;
  printf("Welcome. Please enter the following data of 3 students; ID number, High and weight: \n");
  printf("Student number 1:\n");
  scanf("%d%f%f", &id_number1, &hight_student1, &weight_student1);
  printf("Student number 2:\n");
  scanf("%d%f%f", &id_number2, &hight_student2, &weight_student2);
  printf("Student number 3:\n");
  scanf("%d%f%f", &id_number3, &hight_student3, &weight_student3);
  printf("Thank you, the data you entered is (id, hight, weight):\n%-10d%-4.3f%-3.1f\n%-10d%-3.3f%-3.3f\n%-10d%-4.3f%-3.1f\n",id_number1,hight_student1,weight_student1,id_number2,hight_student2,weight_student2,id_number3,hight_student3,weight_student3);
 while(5);
}

/*
============================================================================
Output==>

Welcome. Please enter the following data of 3 students; ID number, High and weight,

Student number 1:
123123123 123.122 23.122
Student number 2:
234234234 234.443 123.333
Student number 3:
123123567 123.23 23.123

Thank you, the data you entered is (id, hight, weight):

123123123   123.122  23.1
234234234   234.443  123.3
123123567   123.230  23.1


====>> Bye Bye!<<====
============================================================================
*/
