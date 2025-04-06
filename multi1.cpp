#include<stdio.h>
#include<conio.h>
void main()
{
int nm[20];
int i,j,count=0;
clrscr();
printf("Enter a string=");
for(i=0;i<10;i++)
scanf("%d",&nm[i]);
for(i=0;i<10;i++)
{
  for(j=i+1;j<10;j++)
  {
    if(nm[i]==nm[j])
    nm[i]=0;
   }
}
    for(i=0;i<10;i++)
    printf("%d ",nm[i]);
  getch();
  }