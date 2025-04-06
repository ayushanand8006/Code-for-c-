#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;


    for(i=0;i<5;i++)
  {
   for(j=4;j>=i;j--)
   {
   printf(" ");
   }
  printf("* ");

    for(j=0;j<2*(i-1)+1;j++)
     printf(" ");

  if(i>0)
    printf("*");

    printf("\n");
}
return 0;
 }