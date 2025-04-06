
#include<stdio.h>
#include<conio.h>
 void main()
 {
  int d=1,m,y,l,code=0,tot=0,day=0,i,j,f=0,mx,yr,n;
  clrscr();
  printf("Enter Month and Year respectively=");
  scanf(" %d %d",&m,&y);
  mx=m;
  yr=y;
  if(m==1)
  {

  m=1;
  }
  if(m==2)
  {

  m=4;
  }
  if(m==3)
  {

  m=4;
  }
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
  if(mx==1)
  {
  printf("\n\n \t\t January-%d's Calender\n\n",yr);
  }
  if(mx==2)
  {
  printf("\n\n \t\t February %d's Calender\n\n",yr);
  }
  if(mx==3)
  {
  printf("\n\n \t\t March -%d's Calender\n\n",yr);
  }
  if(mx==4)
  {
  printf("\n\n \t\t April-%d's Calender\n\n",yr);
  }
  if(mx==5)
  {
  printf("\n\n \t\t May-%d's Calender\n\n",yr);
  }
  if(mx==6)
  {
  printf("\n\n \t\t June-%d's Calender\n\n",yr);
  }
  if(mx==7)
  {
  printf("\n\n \t\t July-%d's Calender\n\n",yr);
  }
  if(mx==8)
  {
 printf("\n\n \t\t August-%d's Calender\n\n",yr);
  }
  if(mx==9)
  {
   printf("\n\n \t\t September-%d's Calender\n\n",yr);
  }
  if(mx==10)
  {
  printf("\n\n \t\t October-%d's Calender\n\n",yr);
  }
  if(mx==11)
  {
 printf("\n\n \t\t November-%d's Calender\n\n",yr);
  }
  if(mx==12)
  {
  printf("\n\n \t\t December-%d's Calender\n\n",yr);
  }

  printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
  for(j=1;j<=day-1;j++)
  {
    f++;
    printf("\t");
    }
    if(mx==1)
    n=31;
    if(mx==2)
    {
    if(yr%100==0&&yr%400==0||yr%4==0)
    n=29;
    else
    n=28;
	 }
     if(mx==3)
     n=31;
     if(mx==4)
     n=30;
     if(mx==5)
     n=31;
     if(mx==6)
     n=30;
     if(mx==7)
     n=31;
     if(mx==8)
     n=31;
     if(mx==9)
     n=30;
     if(mx==10)
     n=31;
     if(mx==11)
     n=30;
     if(mx==12)
     n=31;

   for(i=1;i<=n;i++)
   {
   f++;
   printf("%d\t",i);
   if(f==7)
   {
   f=0;
   printf("\n");
   }
  }
 getch();
 }