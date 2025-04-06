#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 long int k=0;
 clrscr();

  printf("enter the number:-");
  scanf("%d",&n);
  for(i=n;i>0;i=i/10)
  {
    j=i%10;
    k=k*10+j;
    }

 printf("\n Reverse no.:- %ld",k);
 getch();

 }
