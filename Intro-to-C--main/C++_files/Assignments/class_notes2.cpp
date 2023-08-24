#include<iostream>
#include<fstream>
using namespace std;

int main()
{

fstream foobar;
char n;


//open file
foobar.open("testfile.txt",ios::out);

//write to file
foobar<<"roshane is great"<<endl;
foobar>>n;
cout<<n;
//close to file

foobar.close();


return 0;}
