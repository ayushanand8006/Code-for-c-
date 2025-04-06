#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j;
int n[10]={1,2,3,4,5,6,7,8,9,10};
clrscr();
for(i=0;i<10;i++)
{
printf("Enter \"%d\" number=",i+1);
scanf("%d",&a[i]);
  for(j=0;i<10;i++)
  {
 if(n[j]==a[i])
  n[j]=0;
  }
 }

getch();
}