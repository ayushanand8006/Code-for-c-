#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t,s[20],x,c=0;
char ch=65;
clrscr();
printf("enter decimal num=");
scanf("%d",&n);
x=n;
for(i=0;n>0;i++)
{
c++;
t=n%16;
s[i]=t;
n=n/16;
}
printf("Binary of %d is:-\n",x);
for(i=c-1;i>=0;i--)
if(s[i]>9)
{
printf("%c",ch);
ch++;
}
else
printf("%d",s[i]);
getch();
}