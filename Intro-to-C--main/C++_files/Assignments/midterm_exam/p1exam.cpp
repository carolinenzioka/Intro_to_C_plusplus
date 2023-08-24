#include <iostream>
using namespace std;
int main()
{
  float miles,feet,cm,meters;

  cout<<"This program converts miles to centimeters\n";
  cout<<"Enter distance in miles:";
  cin>>miles;
  feet= miles*5280;
  meters=feet*.3048;
  cm=meters*100;
  cout<<"The conversion from miles to centimeters is:"<<cm<<endl;

  return 0;
  }
