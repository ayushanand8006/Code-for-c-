#include<stdio.h>
#include<malloc.h>
#include<conio.h>
int main()
{
  char *c;
c=(char*)malloc(10);
*c='A';
printf("%s",c);
getch();
}
