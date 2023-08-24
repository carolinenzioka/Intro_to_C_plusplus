#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 int num_1,num_2;

cout<<"This function tells you if the valuesyou have entered is even or odd.\n";
cout<<"Please enter your values:";
cin>>num_1>>num_2;

if ( ((num_1%2)==0) && ((num_2%2)==0) )
  {
    cout<<"Both values are even\n";
  }

else if( ((num_1%2)==0) && ((num_2%2)>=0) )
  {
    cout<<"Value 1 is even and value 2 is odd\n";
  }
else if( ((num_1%2)>=0) && ((num_2%2)==0) )
  {
      cout<<"Value 1 is odd and value 2 is even\n";
  }
else
  {
      cout<<"Both values are odd\n";
  }

return 0;
}
