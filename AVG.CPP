#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int num[10];
 int i,tot=0,avg,p=0;
 for(i=0;i<10;i++)
 {
 p++;
printf("Enter num:-");
scanf("%d",&num[i]);

tot+=num[i];
}
avg=tot/p;
printf(" Total= %d",tot);
printf("\nAverage=%d",avg);
getch();
}