

#include <stdio.h>


void main()
{

/*
int j, i, r, t, pni, bju, in1;
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("*");
    }
    printf("\n");
  }

  for(r=1;r<=10;r++)
  {
    for(t=1;t<9;t++)
    {
      pni = r*t;
    //  printf("======");
    //  printf("%d X %d = %d\t", r, t, pni);
    //  printf("======");
     printf("%d \t", pni);
    }
    printf(" \n");
  }

  printf("Please enter a number:\n");
  scanf("%d",&in1);
  for(r=1;r<in1;r++)
  {
      if(pni == r%3)
      {
         printf("%d \n", pni);
      }
    //  printf("======");
    //  printf("%d X %d = %d\t", r, t, pni);
    //  printf("======");
  }
  */
    int input, input2, check, check1;
    char ops, minus = '-', plus = '+', divide = '/', times ='*';
    float result;
do{
  printf("Please enter tow numbers:\n");
  check = scanf("%d", &input);
  check1 = scanf("%d", &input2);
  printf(" \n" );
  printf("Please enter the Operation you want to use (*, +, -, *, /):\n");
  {char c; while ((c = getchar()) != '\n' && c != EOF); }
  scanf("%c", &ops);
    switch (ops) {
    case '+':            // Note the colon, not a semicolon
      result = input + input2;
      //printf("And the result is: %d + %d = %d\n", result);
      printf("And the result is: %d + %d = %f\n", input, input2, result);
      break;
    case '-':            // Note the colon, not a semicolon
      result = input - input2;
      printf("And the result is: %d - %d = %f\n", input, input2, result);
      break;
    case '/':            // Note the colon, not a semicolon
      if (input2!=0)
       {
      result = input / input2;
      printf("And the result is: %d / %d = %f\n", input, input2, result);
      break;
       }
      else {
        printf("ERROR!!! you diveded by 0\n");
      }
    case '*':            // Note the colon, not a semicolon
      result = ((float)input * input2);
      printf("And the result is: %d * %d = %f\n", input, input2, result);
      break;
    default:            // Note the colon, not a semicolon
      printf("ERROR You entered and invalid option\n");
    } //  {char c; while ((c = getchar()) != '\n' && c != EOF); }
 }while(check==1 && check1==1);
  while(1);
}
