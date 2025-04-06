#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
    for(i=0;i<5;i++)
  {
   for(j=4;j>=i;j--)
   {
   printf(" ");
   }
  printf("*");

    for(j=0;j<2*(i-1)+1;j++)
    {
    if(i==2&&j>=0)
    printf("*");
    else
     printf(" ");
     }

  if(i>0)
    printf("*");

    printf("\n");
}
 getch();
 }