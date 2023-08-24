/*I like pie
and cheese*/
#include <iostream>

using namespace std;

int main()
{
  float square;

  float perimeter;

  float area;

  cout<< "This program calculates the area and perimeter of a square with a given side. \n";

  cout<<"Enter the length of one side:\n";

  cin>>square;

  perimeter=square*4;

  area=square*square;

  cout<<"Your perimeter is: "<<perimeter<<" and your area is: "<<area<< "\n";

  return 0;
}
