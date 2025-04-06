#include<conio.h>
#include<stdio.h>
#include<malloc.h>
//program of single linked list
struct stu
{
int roll;
char nm[20];
struct stu *next;
};


void main()
{
char ch;
struct stu *start=NULL,*temp=NULL,*p=NULL;
start1:
clrscr();
printf("1. Create list\n2.Display all node \n3. add new node\n4. Exit\n");
ch=getche();
switch(ch)
{
case '1':
if(start==NULL)
{
start=(stu*) malloc(sizeof(stu));
printf("\nEnter Roll:-");
scanf("%d",&start->roll);
fflush(stdin);
printf("Enter Name of Student:-");
gets(start->nm);
start->next=NULL;
fflush(stdin);
addnew:
printf("Do you want more data if yes then press y:");
ch=getche();
if(ch=='y'||ch=='Y')
{
temp=(stu*)malloc(sizeof(stu));
printf("\nEnter Roll:-");
scanf("%d",&temp->roll);
fflush(stdin);
printf("Enter Name of Student:-");
gets(temp->nm);
temp->next=NULL;
fflush(stdin);

p=start;
// stor last node in p
while(p->next!=NULL)
p=p->next;

//now last node in p

p->next=temp;
goto addnew;
}
else
{
printf("List is created Sucessfully:");
}
//break;
}
else
{
printf("List already exist, try again...");
}
break;
//case 1 ended
case '2':
//display all node
if(start!=NULL)
{
printf("\nData of All Students From list:-");
p=start;
do
{

printf("\nRoll \t\t:%d\nName \t\t:%s",p->roll,p->nm);
p=p->next;
}while(p!=NULL);
}
else
{
printf("List empty try again ...");
}
break;
//case 2 ended

case '3':
// add new node at last position
if(start!=NULL)
{
temp=(stu*)malloc(sizeof(stu));
printf("\nEnter Roll:-");
scanf("%d",&temp->roll);
fflush(stdin);
printf("Enter Name of Student:-");
gets(temp->nm);
temp->next=NULL;
fflush(stdin);

p=start;
// stor last node in p
while(p->next!=NULL)
p=p->next;
p->next=temp;
printf("Node Added Sycessfully.");
}
else
{
printf("\nList is not avilable to add new node. try again...");
}
break;
case '4':
goto end;
}
getch();
goto start1;
end:
}//main close