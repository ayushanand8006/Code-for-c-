#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20],nm[20];
int i,j,count=0;
clrscr();
printf("Enter a string=");
gets(str);
strcpy(nm,str);
for(i=0;nm[i]!='\0';i++)
{
if(nm[i]=='O')
continue;
count=1;
  for(j=i+1;nm[j]!='\0';j++)
  {
    if(nm[i]==nm[j])
    {
    count++;
    nm[j]='O';
    }
    }
  printf("%c:- %d ",nm[i],count);

  }
  getch();
  }