#include <iostream>
using namespace std;
int main()
{

  float mt;

  float trans;

  float trans2;

  cout<<" This program will read the weight of a box of cereal in ounces,and then output the weight in metric tons \n";

  cout<<" please enter the weight of your box of cereal in ounces: ";

  cin>>mt;

  trans= mt/35273.92;

  trans2= 35273.92/mt;

  cout<<" The weight is "<<trans<<  " metric tons \n";

  cout<<" You need "<<trans2<<" ounces to yield one metric ton \n";

  return 0;


}
