#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[10][10],temp[10][10];
int i, j,t=0,k,p=0,l;
clrscr();
for(i=0;i<5;i++)
{
printf("Enter %d name",i+1);
gets(name[i]);
}
 for(i=0;i<5-1;i++)
  {
      for(j=i+1:j<5;j++)
    {
       k= strcmp(name[i],name[j];
    if(k<0)
     {
    strcpy(temp[i],name[i]);
    strcpy(name[i],name[j])
    strcpy(name[j],temp[i])
      }
  }
printf("after that \n\n");
for(i=;i<10;i++)
{
 printf("%s \n", name[i]);
}
getchar();
}

    