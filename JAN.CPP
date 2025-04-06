#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,f=0;

  printf("\t\t\t January 2021\n\n");
  printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
  for(j=1;j<=5;j++)
  {
  f++;
  printf("\t");
  }
  for(i=1;i<=31;i++)
  {
  f++;

     printf("%d\t",i);
  if(f==7)
  {
  f=0;
  printf("\n");
  }

  }
  return 0;
  }
