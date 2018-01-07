

#include <stdio.h>
/*
void main()
{
  int input1, input2, check, i;
  do
  {
    printf("Enter tow numbers:");
    check = scanf("%d%d", &input1, &input2);
    if (check<2)
    {
      printf("Error Only 2 numbers!\n");
    }

    }
    {char c; while ((c = getchar()) != '\n' && c != EOF); }
  }while(check<2 || input1<0 || input2<0);
}
void main()
{
  int i, num=10, num2, result1, result2;
  for (i=10; i<100; i++)
  {
    result2=i%num;
    result1=i/num;
    if(result1>result2)
    {
      printf("%d\n", i);
    }

  //  {char c; while ((c = getchar()) != '\n' && c != EOF); }
  }
  while(1);
}
*/

void main()
{
  int i=0, num=10, input1, input2, result1, result2;
  printf("Please enter a NUMBER: " );
  scanf("%d", &input1);
  while (input1!=0)
   {
     result1=input1%num;
     i++;
   }
   printf("\nThere are %d in digits in your number\n", i);
   printf("\nYou number is:%d\n", input1);
   while(1);  //  {char c; while ((c = getchar()) != '\n' && c != EOF); }
}
