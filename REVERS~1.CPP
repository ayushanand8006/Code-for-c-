#include <conio.h>
#include<stdio.h>
void main()
{
 int num[10];
int i,p;
clrscr();
for(i=0;i<10;i++)
{
printf("enter-");
scanf("%d",&num[i]);
}
printf("\n\t\t Previous:-\n\n");
for(i=0;i<10;i++)
{
printf("  num[%d]=%d ",i,num[i]);
}
printf("\n \n\t\t After:-\n\n");
for(i=0;i<10/2;i++)
{
p=num[i];
num[i]=num[9-i];
num[9-i]=p;
}
for(i=0;i<10;i++)
{
printf("  num[%d]=%d ",i,num[i]);
}
getch();
}