#include<iostream.h> 
#include<conio.h>
class A
 {
 protected:
 int a;
 public:
 A()
 {
 a=20;
 }

 virtual void display()=0;
 void show()
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
 void show()
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
 p->show();
 getch();
}
