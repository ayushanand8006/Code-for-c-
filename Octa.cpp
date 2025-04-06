#include<stdio.h>
#include<conio.h>
using namespace std;
int  main()
{
int i,n,t,s[20],x,c=0;
char ch=65;

printf("enter decimal num=");
scanf("%d",&n);
x=n;
for(i=0;n>0;i++)
{
c++;
t=n%8;
s[i]=t;
n=n/8;
}
printf("Octadecimal of %d is:-\n",x);
for(i=c-1;i>=0;i--)
{
printf("%d",s[i]);
}
getch();
}
