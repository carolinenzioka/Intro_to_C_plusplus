#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int num1;
int fv;
int sv;
int tv;
int reverse;

cout<<"This program reverses any given three digit integer\n";
cout<<"Please enter a three digit integer:";
cin >> num1;
fv= num1/100;
reverse=num1%100;
sv=reverse/10;
reverse=reverse%10;
tv=reverse/1;

cout<<"the reverse is:"<<tv<<sv<<fv<<endl;

return 0;
}
