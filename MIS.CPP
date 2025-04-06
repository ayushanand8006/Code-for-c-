#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,mis;
int sum,sn=0;
clrscr();
int n=20;
for(i=0;i<20;i++)
{
printf("Enter \"%d\" number=",i+1);
scanf("%d",&a[i]);
 }
for(i=0;i<19;i++)
{
 sn+=a[i];
}
sum=n*(n+1)/2;
mis=sum-sn;
printf("\n\n %d is the missing number",mis);

getch();
}