
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20][10],temp[20][10];
int dob[20];
double fee[20];
int roll[20];
int i,j,t=0,k;
clrscr();
printf("\n\n\tWrite names of the students");
for(i=0;i<5;i++)
{ 
printf("\nEnter %d Name:- ",i+1);
gets(name[i]);
printf("\nEnter %d dob:- ",i+1);
scanf("%d",& dob[i]);
printf("\nEnter %d Roll no:- ",i+1);
scanf("%d",&roll[i]);
printf("\nEnter %d Fee:- ",i+1);
scanf("%lf",&fee[i]);
fflush(stdin);
}

printf("\n\n \t After saved data:- \n\n");
for(i=0;i<5;i++)
{
 printf("Name:- %s ",name);
printf("\ndob:- %d",dob[i]);
printf("\nRoll no:-%d", roll[i]);
printf("\nFee:-%lf",fee[i]);
}
getch();
}

    