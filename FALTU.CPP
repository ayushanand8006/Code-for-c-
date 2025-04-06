#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,t;
int x=0;
char C;
clrscr();
printf("Enter 20 numbers respectively \n");
for(C='a';C<='c';C++)
{
scanf("%d",&C);
}
for(C='a';C<='c';C++)
{
printf("%d+",C);
x=x+C;
}
printf("\b=%d",x);
getch();
}