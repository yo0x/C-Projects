#define HOURS 24
#define DAYS 7
typedef enum {Sun, Mon, Tue, Wed,Thu, Fri, Sat} week_day;

void printCalendar(char Cal[HOURS][DAYS])
{
  int i,j;
  printf("Tue Wed Thu");
  for(i=0;i<DAYS;i++)
  {
    for(j=0;j<HOURS;j++)
    {
      printf("%d\n", i, Cal[j][i]);
    }
  }
}
int findSlot(char Cal[HOURS][DAYS], week_day Day, int Duration);
int findSlot(char Cal[HOURS][DAYS], week_day Day, int Duration)
{
  for(i=0;i<HOURS;i++)
  {
    for(j=0;j<DAYS;j++)
    {
      printf("%d\n", i, Cal[j][i]);
    }
  }
}
