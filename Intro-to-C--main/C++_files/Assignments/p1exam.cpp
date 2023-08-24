#include <iostream>

using namespace std;
int main()
{
float foot,miles,cm,meters;

cout<<"This program converts miles to centimeters\n";
cout<<"Enter distance in miles:";
cin>>miles;
foot= miles*5280;
meters=foot/.3048;
cm=meters*100;

cout<<"The conversion from miles to centimeters is:"<<cm<<endl;

return 0;
}
