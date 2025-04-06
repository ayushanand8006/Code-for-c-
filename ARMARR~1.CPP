#include <conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 int a[10];
int i,j,d,p=0,tot;
clrscr();
for(i=0;i<5;i++)
{
printf("enter-");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
tot=0;
p=0;
for(j=a[i];j>0;j/=10)
p++;
for(j=a[i];j>0;j/=10)
{
d=j%10;
tot=tot+pow(d,p);
}
if(tot==a[i])
printf("\n\n %d is Armstrong",tot);
}
getch();
}