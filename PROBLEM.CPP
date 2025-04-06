#include<conio.h>
#include<stdio.h>
void main()
{
int num[10],i,j,f=0;
clrscr();
for(i=0;i<10;i++)
{
   printf("enter %d num-",i+1);
   scanf("%d",&num[i]);
}
   for(j=0;j<10;j++)
     {   f=0;
      for(i=2;i<num[j];i++)
      {

      if(num[j]%i==0)
       {
       f=1;
       break;
       }
      }
if(f==0)
printf("%d,",num[j]);
}
getch();
}