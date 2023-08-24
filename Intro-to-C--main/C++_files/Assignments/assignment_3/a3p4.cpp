#include<iostream>
using namespace std;

int main()
{
  int reg_hours;
  int payrate;
  int extra_hours;
  int full_hours;
  int eh;
  string answer;
  string yes;
  string no;

  cout<<"This program calculates your wages \n";
  cout<<"How many hours did you work:";
  cin>>reg_hours;
  cout<<"what is your payrate:";
  cin>>payrate;
  full_hours=reg_hours*payrate;

  if(reg_hours > 40)
  {
   extra_hours=reg_hours-40;
   eh=(40*payrate)+extra_hours*1.6*payrate;
   cout<<"You will get paid:"<<eh<<endl;
 }

else
{
  cout<<"You will get paid:"<<full_hours<<endl;
}




return 0;}
