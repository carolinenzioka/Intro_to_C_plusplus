#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  float a;
  float p;
  float i;
  float Apr;
  float n;
  cout<<"This program calculates your monthly mortgage\n";
  cout<<"What is your principle: ";
  cin>>p;
  cout<<"What is your APR: ";
  cin>>Apr;
  Apr=Apr/100;
  i=Apr/12;
  cout<<"How many years will you be paying: ";
  cin>>n;
  n=n*12;
  a=p*(i+(i/(pow((1+i),n)-1)));
  cout<<"Your monthly mortgage payment is: "<<a<<endl;







return 0;
}
