#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],*b,i,f[10];
for(i=0;i<10;i++)
{
printf(" Enter %d no :-",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
 f[i]=a[i];
 b=&f[i];
 *b+=+1;
 }
 for(i=0;i<10;i++)
{
printf(" \n perivious no =%d",a[i] );
printf("\t Next no = %d",f[i]);

}
getch();
}

