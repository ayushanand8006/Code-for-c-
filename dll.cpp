#include<conio.h>
#include<stdio.h>
#include<malloc.h>
//program of single circular linked list
struct stu
{
int roll;
char nm[20];
struct stu *next;
};


void main()
{
int totalnode;
char ch;
int pos,i;
struct stu *start,*temp,*p,*pre;
start=NULL;
temp=NULL;
p=NULL;
totalnode=0;
start1:
clrscr();
printf("Operatio of single circular linked list \n1. Create list\n2. Display all node\n7. Display one by one \n3. Add new node\n4. Exit\n5. Insert new node\n6. Delete Node\n Press Any Key to Continuee... ");
ch=getche();
//printf("%d",ch);
//getch();
switch(ch)
{
case '1':
if(start==NULL)
{
start=(stu*) malloc(sizeof(stu));
printf("\n \t Enter details.\n");
printf("\nEnter Roll:-");
scanf("%d",&start->roll);
fflush(stdin);
printf("Enter Name of Student:- ");
gets(start->nm);
fflush(stdin);
start->next=start;

addnew:
printf("\n Do you want more data if yes then press y:");
ch=getche();
if(ch=='y'||ch=='Y')
{
temp=(stu*)malloc(sizeof(stu));
printf("\nEnter Roll:-");
scanf("%d",&temp->roll);
fflush(stdin);
printf("Enter Name of Student:-");
gets(temp->nm);
fflush(stdin);
temp->pre=start;
start->next=temp;
p=start;
// stor last node in p
while(p->next!=start)
p=p->next;

//now last node in p

p->next=temp;
p->pre=start;
goto addnew;
}
else
{
printf("\n\t\t List is created Sucessfully:");
}
}
else
{
printf("\n\t\t List already exist, try again...");
}
break;
//case 1 ended
case '2':
//display all node
if(start!=NULL)
{
printf("\n\t Data of All Students From list:-");
p=start;
do
{

printf("\nRoll \t\t:%d\nName \t\t:%s",p->roll,p->nm);
p=p->next;
}while(p!=start);
}
else
{
printf("\n\t \t List empty try again ...");
}
break;
//case 2 ended
