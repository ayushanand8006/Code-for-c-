#include <stdio.h>
#include <conio.h>
struct stu
{
char nm[20];
int roll;
char fnm[20];
char mnm[20];
};
void main()
{
int i;
struct stu de[5];
clrscr();
 for(i=0;i<5;i++)
{
printf("Enter roll= ");
scanf("%d",&de[i].roll);
fflush(stdin);
printf("students name=");
gets(de[i].nm);
printf("Farhers name=");
gets(de[i].fnm);
printf("Mother name= ");
gets(de[i].mnm);
}
printf("\n \t Details feed by user\n \n");
for(i=0;i<5;i++)
{
printf("Enter roll=%d\n",de[i].roll);
printf("students namer=%s \n",de[i].nm);
printf("Farhers name=%s \n",de[i].fnm);
printf("Mother name=%s\n",de[i].mnm);
getch();
}
getch();
}