/*this program reads numbers from a file, and
computes their sum*/

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
  //Declare and initialize variables
  int num;
  int sum =0;
  ifstream infile;
  //opening our file
  infile.open ("data_file.dat");

  //while loop
  while(infile >> num)
  {
    sum += num;

  }
  //output results
  cout<< endl;
  cout<< "the sum is"<<sum<<endl;
  cout<<endl;





  return 0;
}
