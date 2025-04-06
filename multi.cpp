#include<stdio.h>
#include<conio.h>
void main()
{
int nm[20];
int i,j,count=0;
clrscr();
for(i=0;i<10;i++)
{
printf("Enter %d string=",i+1);
scanf("%d",&nm[i]);
}
for(i=0;i<10;i++)
{ 
  for(j=i+1;j<10;j++)
  {
    if(nm[i]==nm[j])
    nm[i]=0;
   }
}
    for(i=0;i<10;i++)
    {
    if(nm[i]==0)
       continue;
    printf("%d ",nm[i]);
    }
  getch();
  }