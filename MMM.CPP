//Multiplication of two different matrix

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],b[3][3],c[3][3],i,j,s=1;
   clrscr();
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      printf("Enter data for a[%d][%d]:-",i,j);
      scanf("%d",& a[i][j]);
     }
   }
   printf("\n\n");
   for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
    {
     printf("Enter data for b[%d][%d]:-",i,j);
     scanf("%d",& b[i][j]);
    }
  }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
     s=s*a[i][j]*b[i][j];
     c[i][j]=s;
     s=1;
    }
   }
   printf("Multiplication  of two matrix a and b :-\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       printf("%d\t",c[i][j]);
       }
       printf("\n");


   }
   getch();
}