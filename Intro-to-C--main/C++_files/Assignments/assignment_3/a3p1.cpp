#include<iostream>
#include<limits>
using namespace std;
int main()
{
  unsigned int number1=numeric_limits <unsigned int>::max();
  unsigned int number2=numeric_limits<unsigned int>::min();
  short int number3=numeric_limits <short int>::max();
  short int number4=numeric_limits<short int>::min();
  int number5=numeric_limits <int>::max();
  int number6=numeric_limits<int>::min();
  long int number7= numeric_limits <long int>::max();
  long int number8=numeric_limits<long int>::min();
  long long int number9= numeric_limits <long long int>::max();
  long long int number10=numeric_limits<long long int>::min();
  float number11= numeric_limits <float>::max();
  float number12=numeric_limits<float>::min();
  double number13= numeric_limits <double>::max();
  double number14=numeric_limits<double>::min();
  long double number15= numeric_limits <long double>::max();
  long double number16=numeric_limits<long double>::min();


cout<<"The max of an unsigned int is: "<<number1<<endl;
cout<<"The min of an unsigned int is: "<<number2<<endl;
cout<<"The max of a shor int is: "<<number3<<endl;
cout<<"The min of a short int is: "<<number4<<endl;
cout<<"The max of an int is: "<<number5<<endl;
cout<<"The min of an int is: "<<number6<<endl;
cout<<"The max of a long int is: "<<number7<<endl;
cout<<"The min of a long int is: "<<number8<<endl;
cout<<"The max of a long long int is: "<<number9<<endl;
cout<<"The min of a long long int is: "<<number10<<endl;
cout<<"The max of a float is: "<<number11<<endl;
cout<<"The min of a float is: "<<number12<<endl;
cout<<"The max of a  double is: "<<number13<<endl;
cout <<"The min of a double is: "<<number14<<endl;
cout<<"The max of a  long double is: "<<number15<<endl;
cout <<"The min of a long double is: "<<number16<<endl;

















  return 0;
}
