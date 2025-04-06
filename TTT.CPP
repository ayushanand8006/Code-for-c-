//Multiplication of two different matrix

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],b[3][3],i,j,s=1;
   clrscr();
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      printf("Enter data for a[%d][%d]:-",i,j);
      scanf("%d",& a[i][j]);
     }
   }

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    b[j][i]=a[i][j];

    }
   }
   printf("Transpose of two matrix a :-\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
   getch();
}