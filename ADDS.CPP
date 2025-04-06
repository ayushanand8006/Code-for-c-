#include<stdio.h>
#include<conio.h>
#include<string.h>
 char* add(char *str1,char *str2);
void main()
{
 char str1[10],str2[10],*str3[25];
clrscr();
printf("Enter 1st string= ");
gets(str1);
printf("Enter 2nd string= ");
gets(str2);
*str3=add(str1,str2);
printf("\n \n Now, string is %s",*str3);
getch();
}
char *add(char *str1,char *str2)
{
char str3[25];
int i,k;
for(i=0;;i++)
{
if(*(str1+i)=='\0')
{
*(str3+i)= ' ';
i++;
break;
}
else
*(str3+i)=*(str2+i);
}
for(k=0;;i++,k++)
{
if(*(str2+k)=='\0')
{
*(str3+i)='\0';
break;
}
else
*(str3+i)=*(str2+k);
  }
return(str3);
}
