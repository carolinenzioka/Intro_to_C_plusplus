//This program uses string manipulation

#include <iostream>
#include <string>
using namespace std;

int main()
{

string x,y,z;
string mystring,longstring;

//string addition

x="hello ";
y="world!";
z=x+y;

cout << endl;
cout <<z <<endl<< endl;
// length,size, and append methods
mystring="mike";
cout << mystring<<" "<<mystring.length()<<endl;
mystring.append(" Morabito ");
cout << mystring<< mystring.length()<<endl;
cout << mystring<< mystring.size()<<endl;
cout<<endl;

//find methods

cout<<mystring<<endl;
cout<< mystring.find("Mor")<< endl; //predict 5
cout<<mystring.find("bito")<<endl;//predict 9
cout<<endl;

//substring method
longstring="Hello World!I am taking a c++course!";
cout<<longstring.substr(6,5)<<endl;
cout<< longstring.substr(longstring.find("c++"),3)<<endl;

return 0;

}
