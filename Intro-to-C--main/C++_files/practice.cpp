#include<iostream>
using namespace std;

main()
{
int n1,n2,n3;

cout<<"This program accepts three integers and prints the smallest.\n";
cout<<"Enter three integers:";
cin>> n1>>n2>>n3;
if (n1<n2) && (n1<n3)
{
  cout<<"The smallest number is"<<n1<<endl;
}

else if (n2<n1) && (n2<n3)
 {
  cout<<"The smallest number is"<<n2<<endl;

}
else
{
  cout<<"The smallest number is"<<n3<<endl;
}



return 0;


}
