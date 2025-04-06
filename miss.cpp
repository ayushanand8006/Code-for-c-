#include<stdio.h>
#include<conio.h>
void main()
{
	int num[20],i,j;
int n[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
clrscr();
for(i=0;i<20;i++)
{
  printf("Enter %d number ",i+1);
  scanf("%d",&num[i]);
    for(j=0;j<20;j++)
    {
      if(n[j]==num[i]) 
        n[j]=0;
     }
  }
  printf("Missed no \n");
  for(i=0;i<20;i++)
   {
    if(n[i]!=0)
      printf("%d,",n[i]);
   }
getch();
}