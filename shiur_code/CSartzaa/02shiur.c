//char.c
#include<stdio.h>

void main()
{
  char ch, och,ch1, och1;
  int a = 2;
  float b, c = 3.21;
  char volvo = 'v';
  int big = 61;
//  putchar('K');
//putchar('\n');
//putchar(volvo);
//putchar(big);
  printf("Please enter CH: ");
  ch = getchar();
  och = ch - 32;
  printf("You entered: %c\n", och);
  fflush(stdout);
  printf("Please enter CH: ");
  ch1 = getchar();
  och1 = ch1 + 32;
  printf("You entered: %c\n", och1);
  //putchar('\n');
  //putchar(ch);
  int i;
    i=0;
    do
    {
        printf("%d %c \n",i,i);
        i++;
    }
    while(i<=500);
  while (1);
}
