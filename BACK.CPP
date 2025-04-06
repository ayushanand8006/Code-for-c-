#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
long int i,j,t=0;
clrscr();
for(i=1;i<=10;i++)
{
 for(j=2;j<=20;j=j+2)
  {
  printf(" %ld^%ld+",i,j);
  t+=pow(i,j);
  }
printf("\b= %ld\n",t);
}
getch();
}