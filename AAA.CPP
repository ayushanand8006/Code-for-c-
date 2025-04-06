//Addition of two different matrix

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],b[3][3],c[3][3],i,j,s=0;
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
    c[i][j]=a[i][j]+b[i][j];
    }
   }
   printf("\n \t Addition of two matrix a and b :-\n\n");
     for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       printf("%d \t",a[i][j]);
       }
       for(j=0;j<3;j++)
       {
       if(i==1&&j==0)
       printf("\b\b\b\b+   ");
       printf("%d \t",b[i][j]);
       }
       for(j=0;j<3;j++)
       {
       if(i==1&&j==0)
       printf("\b\b\b\b=   ");
       printf("%d\t",c[i][j]);
       }
       printf("\n\n");


   }
   getch();
}