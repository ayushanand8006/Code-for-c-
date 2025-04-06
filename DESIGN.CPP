#include<conio.h>
#include<stdio.h>
void main()
{
  int j,i,k;
  clrscr();
  for(i=5;i>0;i--)
  {
    k=5;
   for(j=1;j<i;j++)
   {
    printf(" ");
    k--;
    }
   for(j=k;j>0;j--)
   {
      printf("%d",j);

    }
    for(j=2;j<=k;j++)
    {
       printf("%d",j);
    }
  printf("\n");
  }
 getch();
 }

                    