#include<conio.h>
#include<stdio.h>
int  main()
{
int a[20],i,j,f=0 ,prime[20],t=0,tot=0;

for(i=0;i<20;i++)
{
printf("enter-");
scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{ f=0;
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
{
f=1;
break;}
}
if(f==0)
{
prime[t]=a[i];
t++;
}
}
for(i=0;i<t;i++)
{
tot+=prime[i];
printf("%d,",prime[i]);
}
printf("\b=%d",tot);
return 0;
}
