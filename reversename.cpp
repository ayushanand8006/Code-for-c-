#include<stdio.h>
#include<conio.h>
void main()
{
char nm[20];
int i,count=0,j;
clrscr();
printf("enter=");
scanf("%s",&nm);
for(i=0;nm[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>=0;i--)
printf("%c",nm[i]);
getch();
}