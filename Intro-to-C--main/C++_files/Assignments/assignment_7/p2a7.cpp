#include <iostream>
#include<cmath>
using namespace std;

//function declaration
float division();
float exp1 (float x);
float exp2 (float x);
float sub (float x, float y);
void give_output(float x);
float mult(float x,float y);

int main()
{

float e,subtract,math,div,p1,p2;
div = division();
p1= exp1(div);
p2= exp2(div);
subtract=sub(p1,p2);
cout<<"What is the energy parameter:";
cin>>e;
math=mult(subtract, e);
give_output(math);
return 0;
}

//function definition
float division()
{
float q,r, math;
cout<<"Enter the length parameter: ";
cin>>q;
cout<<"Enter the interparticle distance: ";
cin>>r;
math=(q/r);
return math;
}

float exp1 (float x)
{
  float exp1;
  exp1=pow(x,12);
  return exp1;
}
float mult(float x,float y)
{
  float m;
  m = 4*x*y;
  return m;
}


void give_output(float x)
{
  cout<<"the energy between the two particles is:"<< x <<endl;
}

float sub (float x, float y)
{
  float s;
  s=x-y;
  return s;
}
float exp2 (float x)
{
  float exp2;
  exp2=pow(x,6);
  return exp2;
}
