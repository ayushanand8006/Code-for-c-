#include<stdio.h>
#include<conio.h>
void main()
{
int i =10;
clrscr();
int j;
j=--i ;
printf("%d  " ,j);
j=--i;
printf("%d  " ,j);
j=i++;
printf("%d  ",j);
  j=++i;

printf("%d " ,j);
j=--i + --i - i++ + ++i;
printf("=%d",j);
getch();
}
