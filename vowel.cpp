#include<stdio.h>
#include<conio.h>
void main()
{
char n[10];
int i;
clrscr();
n[0]='A';
n[1]='Y';
n[2]='U';
n[3]='S';
n[4]='H';
 printf("\n\t List \n");
for(i=0;n[i]!='\0';i++)
{
if(n[i]=='A'|| n[i]=='U')
{ printf("%c is vowel\n",n[i]);
}
}
getch();
}