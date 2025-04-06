#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
 for(i=1;i<=6;i++)
 {  k=1;
    for(j=1;j<=6;j++,k++)
    {
    if(j==4)
    k=1;
      if(k==1)
      printf("*");
      if(k==2)
      printf("@");
      if(k==3)
      printf("+");

    }
  printf("\n");
  }
  getch();
  }


