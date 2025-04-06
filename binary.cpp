#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
int n,t,s=0,x,p=1;
printf("enter decimal num=");
scanf("%d",&n);
x=n;
while(n>0)
{
t=n%2;
s=s+t*p;
n=n/2;
p*=10;
}
printf("Binary of %d is:-\n",x);
printf("%d",s);
getch();
}
