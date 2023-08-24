#include <iostream>

using namespace std;

int main()
{
  float seconds;

  float formula;

  const double gravity= 9.81;


  cout<<"This function allows the user to enter a time in seconds and then outputs how far an object would drop if it is in freefall for that length of time\n";

  cout<<"Enter a time in seconds:";

  cin>>seconds;

  formula=seconds*.5*gravity;

  cout<<"The distance of the objects frefall is "<<formula<<" \n";

  return 0;

}
