#include<stdio.h>
#include<conio.h>
char check(int);
int main()
{ 
  int a;
char t;

  printf("enter no");
  scanf("%d",& a);
if(t=='e')
printf("%d is even",a);
else
printf("%d is odd",a);
  getch();
}
char check(int b)
{ 
  char o, e;
  if (b%2==0)
    
    return ('e');

  else
  
    return ('o');
}   

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
   printf("Addition of two matrix a and b :-\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
	printf("%d\t",a[i][j]);
	if(i==1&&j==2)
	printf("\b + ");
       }
       for(j=0;j<3;j++)
       {
	printf("%d\t",b[i][j]);
	if(i==1&&j==2)
	printf("\b = ");
       }
       for(j=0;j<3;j++)
       {
	printf("%d\t",c[i][j]);
	if(i==1)
	printf("\b");
       }
   }
return 0;
}