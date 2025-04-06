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
for(i=0;i<10;i++)
{
p=num[i];
num[i]=num[9-i];
num[9-i]=p;
printf("%d\n",num[i]);
}

getch();
} 