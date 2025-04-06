
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[10][10],temp[10][10];
char dob[10][10];
int fee;
int roll;
int i,j,t=0,k,p=0,l;
clrscr();
printf("\n\n \t \t Write names of the students\n\n");
for(i=0;i<5;i++)
{ 
fflush(stdin);
printf("Enter %d Name:- ",i+1);
gets(name[i]);
printf("\nEnter %d dob:- ",i+1);
gets(dob[i]);
printf("\nEnter %d Roll no:- ",i+1);
gets(roll);
printf("\nEnter %d Fee:- ",i+1);
gets(fee);
}
 for(i=0;i<5-1;i++)
  {
      for(j=i+1;j<5;j++)
    {
       k=strcmp(name[i],name[j]);
    if(k>0)
     {
    strcpy(temp[i],name[i]);
    strcpy(name[i],name[j]);
    strcpy(name[j],temp[i]);
      }
  }
 }
printf("\n\n \t After Arranging :- \n\n");
for(i=0;i<5;i++)
{
 printf("Name:-%s ",name);
printf("\ndob:- %s",dob);
printf("\nRoll no:-%d", roll);
printf("\nFee:-%f",fee);
}
getch();
}

    