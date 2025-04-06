#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
 void word(char*, int);
 void convert(char*, int,int);
 void main()
{
clrscr();
int n, tot=0,p=1,i,f,t;
char * ch;
printf("\n\n\t\t \t NUMBER TO WORDS ");
printf("\n\n\tEnter the number=");
scanf("%d",&n);
		for(i=n;i>0;i/=10)
			tot++;
switch(tot)
{
 case 1:
   ch= (char*)malloc(6*sizeof(char));
   strcpy(ch,"\0");
	convert(ch,n,tot);
		break;
 case 2:
   ch= (char*)malloc(20*sizeof(char));
      strcpy(ch,"\0");
	t=tot;
     for(i=n;i>0;i=i%p)
    {
    p=pow(10,t-1);
     f=i/p;
     if(f==1&&t==2)
     {
     i=i%p;
      p=pow(10,t-1);
      f=f*10+i;
      convert(ch,f,t);
      i=i/10;
      break;
      }
     if(t==2)
	convert(ch,f*10,t);
	else
	convert(ch,f,t);
	t--;
  }// for closing.
break;
  case 3:

   ch= (char*)malloc(30*sizeof(char));
	t=tot;
	strcpy(ch,"\0");
       for(i=n;i>0;i=i%p)
    {
    p=pow(10,t-1);
     f=i/p;
     if(t==2)
	convert(ch,f*10,t);
	else
	convert(ch,f,t);
	if(t==3)
	strcat(ch," HUNDRED");
	t--;
  }// for closing.
break;

 case 4:

   ch= (char*)malloc(30*sizeof(char));
		t=tot;
	strcpy(ch,"\0");
       for(i=n;i>0;i=i%p)
    {
    p=pow(10,t-1);
     f=i/p;
     if(t==2)
	convert(ch,f*10,t);
	else
	convert(ch,f,t);
	if(t==3)
	strcat(ch," HUNDRED");
	if(t==4)
	strcat(ch," THOUSAND");
	t--;
  }// for closing.
break;
case 5:
   ch= (char*)malloc(30*sizeof(char));
	t=tot;
	strcpy(ch,"\0");
       for(i=n;i>0;i=i%p)
    {
    p=pow(10,t-1);
     f=i/p;
     if(t==2||t==5)
	convert(ch,f*10,t);
	else
	convert(ch,f,t);
	if(t==3)
	strcat(ch," HUNDRED");
	if(t==4)
	strcat(ch," THOUSAND");
	t--;
  }// for closing.
break;
  }// switch closing.
	printf("\n\t\t-> %s",ch);
getch();
}
	void convert(char* c ,int data, int unit)
	{
	switch(unit)
	{
	case 1:
		word(c,data);
		break;
	case 2:
		word(c,data);
		break;
	case 3:
		word(c,data);
			break;
	case 4:
		word(c,data);
		break;
	case 5:
		word(c,data);
		break;
	}// switch close.
	}// convert closing.

			void word(char* c, int data)
			{
			int t,i,f;
			char ch[50];
			switch(data)
			{
				case 0:
					strcpy(ch,"ZERO\0");
						break;
				case 1:
					strcpy(ch,"ONE\0");
						break;
				case 2:
					strcpy(ch,"TWO\0");
						break;
				case 3:
					strcpy(ch,"THREE\0");
						break;
				case 4:
					strcpy(ch,"FOUR\0");
						break;
				case 5:
					strcpy(ch,"FIVE\0");
						break;
				case 6:
					strcpy(ch,"SIX\0");
						break;
				case 7:
					strcpy(ch,"SEVEN\0");
						break;
				case 8:
					strcpy(ch,"EIGHT\0");
						break;
				case 9:
					strcpy(ch,"NINE\0");
						break;
				case 10:
					strcpy(ch,"TEN\0");
						break;
				case 11:
					strcpy(ch,"ELEVEN\0");
						break;
				case 12:
					strcpy(ch,"TWELVE\0");
						break;
				case 13:
					strcpy(ch,"THIRTEEN\0");
						break;
				case 14:
					strcpy(ch,"FOURTEEN\0");
						break;
				case 15:
					strcpy(ch,"FIFTEEN\0");
						break;
				case 16:
					strcpy(ch,"SIXTEEN\0");
						break;
				case 17:
					strcpy(ch,"SEVENTY\0");
						break;
				case 18:
					strcpy(ch,"EIGHTTEEN\0");
						break;
				case 19:
					strcpy(ch,"NINETEEN\0");
						break;
				case 20:
					strcpy(ch,"TWENTY\0");
						break;
				case 30:
					strcpy(ch,"THIRTY\0");
						break;
				case 40:
					strcpy(ch,"FORTY\0");
						break;
				case 50:
					strcpy(ch,"FIFTY\0");
						break;

				case 60:
					strcpy(ch,"SIXTY\0");
						break;
				case 70:
					strcpy(ch,"SEVENTY\0");
						break;
				case 80:
					strcpy(ch,"EIGHTY\0");
						break;
				case 90:
					strcpy(ch,"NINETY\0");
					break;
			}//switch.
			strcat(c," ");
			 strcat(c,ch);

		}// word function closing.














