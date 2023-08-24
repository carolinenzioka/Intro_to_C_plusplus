#include <iostream>
#include<fstream>
using namespace std;

int main()
{
  // Declare Class
  fstream myfile;
  //open files
  myfile.open("output_data.txt", ios::out);
  cout<<"Input an integer between"

  //write output_data
  myfile<<endl;
  myfile<<"hello world"<<endl<<endl;
  myfile<<"We have written to a file!"<<endl;
  myfile.close();

return 0;}
