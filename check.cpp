#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 0;
clrscr();
	printf("Hello"); 
	char s[4] = {'\b','\t','\r','\n'};
	for(i = 0;i<4;i++){
	printf("%c", s[i]);	
}
getch();
}