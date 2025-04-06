#include<conio.h>
#include<stdio.h>
void main()
{
char str1[20],str2[20];
int i,j,len,flag=0;
clrscr();
printf("enter num-");
scanf("%s",&str1);
for(i=0;str1[i]!='\0';i++)
len++;
for(i=0,j=len-1;i<len;i++,j-- )
str2[i]=str1[j];
str2[i]='\0';
for(i=0;;i++)
{
if(str1[i]=='\0'&&str2[i]=='\0'||str1[i]=='\0'||str2[i]=='\0')
  flag=str1[i]-str2[i];
  break;  }
if(flag==0)
printf("%s is palindrome",str1);
else
printf("%s is not a paledrome",str1);
getch();
}