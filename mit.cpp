1#include<conio.h>
#include<stdio.h>
struct stu
{
int roll;
char nm[20];
char fnm[20];
float age;
};
void main()
{
clrscr();
stu var2;
printf("Enter roll no of student:-");
scanf("%d",&var2.roll);
printf("Enter age of student");
scanf("%.2f",&var2.age);
printf("Enter name of student");
gets(var2.nm);
printf("Enter father name of student:-");
gets(var2.fnm);
printf("Roll=%d \nName=%s \nFathers name=%s \nAge=%.2f",var2.roll,var2.nm,var2.fnm,var2.age);
getch();
}