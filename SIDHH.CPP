
#include<stdio.h>
#include<conio.h>
char check(int);
void main()
{ 
  int a;
char t;
  clrscr();
  printf("\t Enter no= ");
  scanf("%d",& a);
  t=check(a);
if(t=='e')
printf("\n\t  %d is even",a);
else
printf(" \n\t  %d is odd",a);
  getch();
}
char check(int b)
{ 
  char o, e;
  if (b%2==0)
    
    return ('e');

  else
  
    return ('o');
}