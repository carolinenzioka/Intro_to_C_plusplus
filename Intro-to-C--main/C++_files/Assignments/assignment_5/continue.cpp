#include<iostream>
using namespace std;

int main()
{
int count ;
  for (count=0;count<10;count++)
    {
      if (count==3)
      {
        continue;
      }
      cout<<"Hello world! "<<count <<endl;
    }


return 0;
}
