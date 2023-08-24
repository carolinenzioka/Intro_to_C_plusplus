// this program calculates the are of a circle
#include <iostream>
using namespace std;

//function declaration
float circlearea(float r);

int main()
{
  float pizzaR,pizzaA;

cout<<"What is the radius of your pizza?"<<endl;
cin>>pizzaR;
pizzaA=circleArea(pizzaR);                            //function cell

cout<<"your pizza's area is"<,pizaA<<endl<<endl;

cout<<"The area ofa circle of radius 5.0 is"
    <<circleArea(5.0)<<endl<<endl;                        //function cell


return 0;
}
//function definition
float circleArea(float r)
{

float area;
area= 3.14159*r*r;
return area;

}
