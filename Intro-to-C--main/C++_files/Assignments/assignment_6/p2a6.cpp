#include <iostream>
using namespace std;

int main()
{
int counter,num,i;
int sum=0;
float avg;


cout<<"This program calculates the sum and average of any given set of integers\n";
i=0;

while(num!=1000)
{
cout<<"Enter an integer:";
cin>>num;
sum=num+sum;
i++;

}
sum=sum-1000.00;
avg=sum/(i-1);

cout<<"Your sum is: "<<sum<<endl<<"your average is:"<<avg<<endl;

 return 0;
}
