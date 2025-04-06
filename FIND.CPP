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
m==2)
  m=4;
  if(m==3)
  m=4;
  if(m==4)
  m=0;
  if(m==5)
  m=2;
  if(m==6)
  m=5;
  if(m==7)
  m=0;
  if(m==8)
  m=3;
  if(m==9)
  m=6;
  if(m==10)
  m=1;
  if(m==11)
  m=4;
  if(m==12)
  m=6;

  if(y>=1500&&y<=1599)
  code=0;
  if(y>=1600&&y<=1699)
  code=6;
  if(y>=1700&&y<=1799)
  code=4;
  if(y>=1800&&y<=1899)
  code=2;
  if(y>=1900&&y<=1999)
  code=0;
  if(y>=2000&&y<=2099)
  code=6;
  if(y>=2100&&y<=2199)
  code=4;
  if(y>=2200&&y<=2299)
  code=2;

  y=y%100;
  l=y/4;
  tot=tot+d+m+y+l+code;
  day=tot%7;
  if(day==0)
  day=7;
  if(day==1)
  printf("\n\n \t Sunday");
  if(day==2)
  printf("\n\n\t Monday ");
  if(day==3)
  printf("\n\n\t Tuesday");
  if(day==4)
  printf("\n\n\t Wednesday");
  if(day==5)
  printf("\n\n\t Thursday");
  if(day==6)
  printf("\n\n\t Friday");
  if(day==7)
  printf("\n\n\t Saturday");


  printf("\n\n\n\n\t day=%d total=%d code=%d year=%d",d,tot,code,yr);
  getch();
  }