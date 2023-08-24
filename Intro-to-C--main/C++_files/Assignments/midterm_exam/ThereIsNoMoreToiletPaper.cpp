#include<iostream>
#include<fstream>
using namespace std;

int main()
{

fstream Corona;
char n;


//open file
Corona.open("COVID19.txt",ios::out);

//write to file
Corona<<"I love it"<<endl;
Corona>>n;
cout<<n;
//close to file

Corona.close();


return 0;}
