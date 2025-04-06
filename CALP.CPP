#include<conio.h>
#include<stdio.h>
#include<malloc.h>
#include<math.h>
//program of single linked list
using namespace std;
struct cal
{
int a,b,c,res;
float f,t;
char result;
struct cal *next;
};

int main()
{//main open.
int totalnode;
char ch;
int pos,i;
struct cal *start,*temp,*p;
start=NULL;
temp=NULL;
p=NULL;
totalnode=0;
start1:

printf("1. Addition \n2. substract \n3. Multiplay \n4. Divide \n5. Power \n6.HISTORY\n 7.EXIT \nPress Any Key to Continuee...  ");
ch=getche();
printf("\n\n \t\t CALCULATOR\n");
switch(ch)
{// switch close.
case '1':
if(start==NULL)
{ //add if open
start=(cal*) malloc(sizeof(cal));
		printf("\n\n\n \t\t\t Addition");
printf("\nEnter 1st Number ");
scanf("%d",&start->a);
printf("Enter 2nd number ");
scanf("%d",&start->b);
start->res=start->a+start->b;
printf("Addition of %d + %d =%d",start->a,start->b,start->res);
start->result='+';
start->next=NULL;
}//add if close
  else
{// else Add open.
printf("\n Addition");
temp=(cal*)malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&temp->a);
printf("Enter 2nd number ");
scanf("%d",&temp->b);
temp->res=temp->a+temp->b;
printf("Addition of %d + %d =%d",temp->a,temp->b,temp->res);
temp->result= '+';
p=start;
while(p->next!=NULL)
p=p->next;
p->next=temp;
}//else close.
//case 1 ended.
break;
case'2':
printf("\n\t\t\t\t Subtract");
start=(cal*) malloc(sizeof(cal));
if(start==NULL)
{//subs if.
printf("\nEnter 1st Number ");
scanf("%d",&start->a);
printf("Enter 2nd number ");
scanf("%d",&start->b);
start->next=NULL;
     if(temp->a>temp->b)
    {//if open.
      start->res=start->a - start->b;
 printf("\n Result of subtraction \n \t %d-%d= %d",start->a,start->b,start->res);
     } //if close.

     else
	{ //else open.
  start->res=start->b-start->a;
 printf("\n Result of subtraction in right manner \n \t %d-%d= %d",start->b,start->a,start->res);
	}//else close.,
       start->next=NULL;
start->result='-';
}// if close.
else
{ // else open.
temp=(cal*)malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&temp->a);
printf("Enter 2nd number ");
scanf("%d",&temp->b);
if(temp->a>temp->b)
	{ //if open.
		temp->res=temp->a-temp->b;
 printf("\n Result of subtraction \n \t %d-%d= %d",temp->a,temp->b,temp->res);
	}//if close.
     else
	{ //open else
		temp->res=temp->b-temp->a;
	  printf("\n Result of subtraction in right manner \n \t %d-%d= %d",temp->b,temp->a,temp->res);
	       }//close else
temp->result='-';
temp->next=NULL;
p=start;
while(p->next!=NULL)
p=p->next;
p->next=temp;
}

 break;
			// CASE 2 ended.

case'3':
printf("\n\t\t\t\t Multiplay");
if(start==NULL)
{ // if open
start=(cal*) malloc(sizeof(cal));

printf("\nEnter 1st Number ");
scanf("%d",&start->a);
printf("Enter 2nd number ");
scanf("%d",&start->b);

  start->res=start->a*start->b;
printf(" Multiplay of %d X %d =%d",start->a,start->b,start->res);
start->result='*';
start->next=NULL;
} //if close.
  else
{//else open.
temp=(cal*)malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&temp->a);
printf("Enter 2nd number ");
scanf("%d",&temp->b);
temp->res=temp->a*temp->b;
printf("Multiplay of %d X %d =%d",temp->a,temp->b,temp->res);
temp->result='*';
p=start;
temp->next=NULL;
while(p->next!=NULL)
p=p->next;
p->next=temp;

}//else close
break;
		     //case3 ended.
case'4':
printf("\n\t\t\t\t DIVIDE");
if(start==NULL)
{ // if open
start=(cal*) malloc(sizeof(cal));

printf("\nEnter 1st Number ");
scanf("%d",&start->a);
printf("Enter 2nd number ");
scanf("%d",&start->b);

  start->res=start->a/start->b;
printf(" Divide of %d X %d =%d",start->a,start->b,start->res);
start->result='/';
start->next=NULL;
} //if close.
  else
{//else open.
temp=(cal*)malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&temp->a);
printf("Enter 2nd number ");
scanf("%d",&temp->b);
temp->res=temp->a/temp->b;
printf("\n Divide of %d X %d =%d",temp->a,temp->b,temp->res);
temp->result='/';
p=start;
temp->next=NULL;
while(p->next!=NULL)
p=p->next;
p->next=temp;

}//else close
break;
// Case 4 close.
case'5':
printf("\n\t\t\t\t POWER\n" );
if(start==NULL)
{ // if open
start=(cal*) malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&start->a);
printf("Enter power");
scanf("%d",&start->b);

  start->res=pow(start->a,start->b);
printf(" power of %d ^ %d =%d",start->a,start->b,start->res);
start->result='^';
start->next=NULL;
} //if close.
  else
{//else open.
temp=(cal*)malloc(sizeof(cal));
printf("\nEnter 1st Number ");
scanf("%d",&temp->a);
printf("Enter power :-");
scanf("%d",&temp->b);
temp->res=pow(temp->a,temp->b);
printf("Power of %d X^ %d =%d",temp->a,temp->b,temp->res);
temp->result='^';
p=start;
temp->next=NULL;
while(p->next!=NULL)
p=p->next;
p->next=temp;

}//else close
break;
//Case 5 ended.
case'6':
if(start!=NULL)
{
  printf("\n\n\t\t HISTORY\n ");
p=start;
do
{
 printf("\n %d %c %d=%d \n",p->a,p->result,p->b,p->res);
p=p->next;
}while(p!=NULL);
}
 else
  printf("\n\n\t RESULT IS EMPTY");
 break;

 case '7':
   goto end;
 default:
       printf("\n\n\t\t Invilid input try again....");

}//switch close.

getch();
goto start1;
end:
    return 0;
}//main close
