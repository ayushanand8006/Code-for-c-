#include<iostream.h>
#include<conio.h>
  class Time
{
  int hours,minutes,seconds;
  public:
  void gettime();
  void sum(Time,Time);
};
  void Time::gettime()
  {
  cout<<"Plz enter hours time:-";
  cin>>hours;
  cout<<"\nPlz enter minutes time:-";
  cin>>minutes;
  cout<<"\nPlz enter seconds time:-";
  cin>>seconds;
  }
  void Time::sum(Time t1,Time t2)
  {
    Time t3;
    t3.seconds=t1.seconds+t2.seconds;
    t3.minutes=t3.seconds/60;
    t3.seconds=t3.seconds%60;
    t3.minutes=t1.minutes+t2.minutes+t3.minutes;
    t3.hours=t3.minutes/60;
    t3.minutes=minutes%60;
    t3.hours=t1.hours+t2.hours+t3.hours;
    cout<<"\n"<<t3.hours<<"-Hours "<<t3.minutes<<"-minutes "<<t3.seconds<<"-secons ";
  }
    void main()
  {
    clrscr();
    Time obj1,obj2,obj3;
    obj1.gettime();
    obj2.gettime();
    obj3.sum(obj1,obj2);
    getch();
  }