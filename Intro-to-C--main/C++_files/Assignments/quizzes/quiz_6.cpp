#include <iostream>
using namespace std;

int count_digits(int pn);

int main()
  {
    int pn,cd;
    cout<<"Please enter a positive integer:";
    cin>>pn;
    cd=count_digits(pn);
    cout<<"The number "<<pn<<" has " <<cd<< " digits in it.\n";
    return 0;

  }

int count_digits(int x)
  {
    int count;
    count=0;

    while(x>0)
      {
        x = x/10;
        count++;
      }
    return count;
  }
