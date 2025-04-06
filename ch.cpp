#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
printf("Enter");
scanf("%c",&a);
if(a>='a'&& a<='z'|| a>='A'&&a<='Z')
printf ("%c is an Alphabet",a);
else if(a>=0&&a<=9)
printf ("%c is a number",a);
else
printf ("%c is a special character",a);
getch();
}

