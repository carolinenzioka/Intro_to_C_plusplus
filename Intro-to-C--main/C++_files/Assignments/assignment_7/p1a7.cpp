// this program converts farenheit  to celsius
#include <iostream>
using namespace std;

//function declaration
float get_input();
float process_data(float x);
give_output(float x);

int main()
{
  float tmp1,tmp2;
  get_input();
  tmp2=process_data(get_input());

  cout<<"The temperature in farenheit is: "<<  give_output(tmp2)<<endl;

  return 0;

}

//function definition
float get_input()
{
float f;
cout<<"Enter the temperature in celsius: ";
cin>>f;
return f;
}

float process_data(float x)
{
float c;
c=((9.0/5.0)*x)+32.0;
return c;
}
give_output(float x)
{
  return x;
}
