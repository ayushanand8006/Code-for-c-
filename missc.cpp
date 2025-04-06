#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j;
int n[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
clrscr();
for(i=0;i<10;i++)
{
printf("Enter \"%d\" number=",i+1);
scanf("%d",&a[i]);
}
j=0;
  for(i=0;i<10;i++)
  {
 if(n[j]==a[i])
{
  n[j]=0;
 j++
}
  }

for(j=0;j<10;j++)
{
if(n[j]!=0)
printf(" %d is missing.\n",n[j]);
}
getch();
}