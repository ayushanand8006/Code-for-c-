#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,d,rev=0;
clrscr();
printf("enter decimal num=");
scanf("%d",&n);
for(i=n;i>0;i=n/2)
{
d=n%2;
rev=rev*10+d;
}
if(d==0)
printf("1");
if(d!=0)
printf("0");
printf("%d",d);
}
getch();
}