#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int right=55;
clrscr();
printf("Guess The Number=- ");
scanf("%d",&n);
for( ; ; )
{
  if(n==right)
  {
    printf("\n\n\n\t Congralulation You Guess Right");
    break;
    }
  if(n>right)
  {
   printf("\n You Guess Too High Try Again:- ");
   scanf("%d",&n);
   continue;
   }
  if(n<right)
  {
   printf("\n You Guess Too Low Try Again:- ");
   scanf("%d",&n);
   continue;
   }
 }
 getch();
 }