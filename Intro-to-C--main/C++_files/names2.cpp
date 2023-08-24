#include <iostream>

using namespace std;

int main()
{
  const string MESSAGE = "hello";

  string first_name;
  string last_name;
  char initial;

  cout << "Please enter your first name:";
  cin >> first_name;
  cout <<"please enter your last name:";
  cin >> last_name;
  cout <<"please enter your middle initial:";
  cin >> initial;

  cout<< MESSAGE << endl;
  cout << first_name<< "" << initial<< ""<< last_name << endl;

  return 0;
}
