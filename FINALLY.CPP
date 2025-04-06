#include<conio.h>
#include<stdio.h>
void main()
{
int a,tot=0,i;
clrscr();
for(i='a';i<='t';i++)
{
printf("enter num-");
scanf("%d",&a);
tot=tot+a;

}
printf("%d",tot);
getch();
}