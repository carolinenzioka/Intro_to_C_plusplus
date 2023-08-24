#include <iostream>
using namespace std;

int main()
{
  float tone,ttwo,tthree;
  int c1,c2;
  float avg;

  cout<<"This program accepts three test scores and two cut off values \n and tells you if your average is high or small\n";
  cout<<"Enter your three scores:";
  cin>>tone>>ttwo>>tthree;
  avg= (tone+ttwo+tthree)/3;
  cout<<"Enter your cut off values (least-greatest):";
  cin>>c1>>c2;
  if (avg<c1)
  {
    cout<<"Your average test grade is classified as:L\n";
  }
  else if ((c1<=avg)&&(avg<c2))
  {
    cout<<"Your average test grade is classified as:M\n";
  }
  else if (c2<=avg)
  {
    cout<<"Your average test grade is classified as:H\n";
  }

return 0;
}
