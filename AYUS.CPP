#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k,t;
t=8;
clrscr();
  for(i=1;i<=5;i++)
  {
  for(j=1;j<=i;j++)
  printf("%d",j);
  for(j=t;j>0;j=j-2)
  printf("  ");
  for(k=i;k>0;k--)
  printf("%d",k);
  printf("\n");
  t=t-2;
  }

getch();
}