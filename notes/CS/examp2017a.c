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
  int start = 0;
  for(i=0;i<DAYS;i++)
  {
    for(j=0;j<HOURS;j++)
    {
      if(Cal[j][i] == 32)
      {
        start ++;
        if (start == Duration)
        start = Cal[j-start][i];
        return start;
      }
    }
    if(start !=Duration) return -1;
  }
}
int schedule(char Cal[HOURS][DAYS], week_day Day, unsigned Duration, char Code);
int schedule(char Cal[HOURS][DAYS], week_day Day, unsigned Duration, char Code)
{
  int rs;
  rs = findSlot(Cal[HOURS][DAYS], week_day Day, Duration);\
  if (rs !=-1)
  {
    return 0;
  }else {
    return -1;ifcinfig
    ifconfig

  }
}
