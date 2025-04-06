#include<conio.h>
#include<stdio.h>
void main()
{
int count=0,i,j;
char nm[20],a[20];
clrscr();
printf("enter your name-");
scanf("%s",&nm);
for(i=0;nm[i]!='\0';i++)
count++;
for(i=count,j=0;i>=0;i--,j++)
a[j]=nm[i];
printf("%s",a);
for(j=0;nm[j]!='\0';j++)
  {
if(a[j]==nm[j])
   printf("This string is paledrome");
}
getch();
}