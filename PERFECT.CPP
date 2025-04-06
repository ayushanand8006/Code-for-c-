#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,t;
 clrscr();
 for(i=1;i<=1000;i++)
 {
 t=0;
  for(j=1;j<i;j++)
  {
    if(i%j==0)
     t=t+j;
      }

     if(i==t)
     printf(" \n %d is a perfect number",i);
      }


     getch();
     }
