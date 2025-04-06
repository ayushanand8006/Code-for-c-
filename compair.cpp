#include<conio.h>
#include<stdio.h>
void main()
{
int count=0,i,j;
int t=0;
char ch[20],a[20];
clrscr();
printf("enter your1 st name-");
scanf("%s",&ch);
printf("enter your 2nd name-");
scanf("%s",a);
for(i=0;ch[i]!='\0';i++)
count++;
for(i=0;i<count;i++)
  {
if(ch[i]==a[i])
 t++;
}
if(t==count)
printf("\nThis string is same\n");
else
printf("\nThis string is not same\n");
getch();
}