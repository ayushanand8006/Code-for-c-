#include<conio.h>
#include<stdio.h>
void main()
{
int count=0,i;
char nm[20];
clrscr();
printf("enter your name-");
scanf("%s",&nm);
for(i=0;nm[i]!='\0';i++)
{
if(nm[i]>='A'&&nm[i]<='Z' ||nm[i]>=97&&nm[i]<=122)
count++;
}
printf("total num of char is %d in string %s",count,nm);
getch();
}