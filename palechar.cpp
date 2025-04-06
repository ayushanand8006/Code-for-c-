#include<conio.h>
#include<stdio.h>
void main()
{
int count=0,i,j;
int t=0;
char nm[20],a[20];
clrscr();
printf("enter your name-");
scanf("%s",&nm);
for(i=0;nm[i]!='\0';i++)
count++;

  for(i=count-1,j=0;i>=0;i--,j++)
{
   a[j]=nm[i];
}
for(j=0;nm[j]!='\0';j++)
  {
if(a[j]==nm[j])
 t++;
}
if(t==count)
printf("\nThis string is paledrome\n");
else
printf("\nThis string is not a paledrome\n");
getch();
}