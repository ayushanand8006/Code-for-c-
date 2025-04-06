#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, f, i=0,g[10],t=0;
a=178;
 while(b>0)
{ i++;
  f=b%10;
   if(i==2)
     {
       g[t]=f;
      i=0;
       t++;
      }
    b=b/10;
   }
t=0;
while(t>10)
{
  printf("%d",g[t]);
}
getch();
}
