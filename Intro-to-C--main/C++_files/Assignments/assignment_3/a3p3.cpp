#include<iostream>
using namespace std;

int main()
{
float celsius;
float farenheit;

cout<<"This program calculates farenheit with the given celsius\n/";
cout<<"Enter the temperature in celsius(ex.23.0):";
cin>>celsius;
farenheit=(9.0/5.0)*celsius+32.0;
cout<<"the temperature is "<<farenheit<<" degrees farenheit"<<endl;

return 0;

}
