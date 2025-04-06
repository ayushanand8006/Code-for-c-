#include<iostream.h> 
#include<conio.h>
class A
 {
 protected:
 int a;
 public:
 A()
 {
 a=10;
 }

 virtual void display()
{
cout<<"\n A="<<a;
 }
};
class B: public A
{
 protected:
 int b;
 public:
 B()
 {
 b=10;
 }

void display()
{
cout<<"\n B="<<b;
 }
};
void main()
{
clrscr();
 A *p;
 B obj;
 p=&obj;
 p->display();
  A obj2;
  p=&obj2;
  p->display();
 getch();
}
