#include <conio.h>
#include<stdio.h>
void main()
{
 int a[10];
int i,max,min;
clrscr();
for(i=0;i<10;i++)
{
printf("enter-");
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
max=a[i];
if(min>a[i])
min=a[i];
}
printf("\n \t max=%d\n\t min=%d",max,min);
getch();
}