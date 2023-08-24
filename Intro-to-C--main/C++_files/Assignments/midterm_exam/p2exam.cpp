#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum,n,i,math;
    cout<<"This function computes the sum of the first 3n2-1 integers\n";
    cout<<"Enter an integer: ";
    cin>>n;
    sum=0;
    for (i=1;i<=n;i++)
      {
        math=(3*pow(i,2)-1);
        sum=math+sum;
    
      }

    cout<<"your answer is: "<<sum<<endl;

return 0;
}
