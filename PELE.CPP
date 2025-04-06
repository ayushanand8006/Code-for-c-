#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,t,d;
 clrscr();
 for(i=1;i<=1000;i++)
 {
 t=0;
 for(j=i;j>0;j=j/10)
 {
 d=j%10;
 t=t*10+d;
 }
 if(i==t)
 printf("\n %d is a peledrome number",t);
 }
 getch();
 }
