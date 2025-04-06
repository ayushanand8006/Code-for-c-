#include<conio.h>
#include<stdio.h>
void main()
{
int count=0,i,j;
int t=0;
char ch[20],a[20];
clrscr();
printf("enter your 1st name-");
scanf("%s",&ch);
printf("enter your 2nd name-");
scanf("%s",&a);
for(i=0;ch[i]!='\0';i++)
count++;

  for(i=count,j=0;i<20;i++,j++)
{
   ch[i]=a[j];
}
printf("\n now new string is %s",ch);
getch();
}