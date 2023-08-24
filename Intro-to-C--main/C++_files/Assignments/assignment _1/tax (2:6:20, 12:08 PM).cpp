#include <iostream>
using namespace std;
int main()
{

  float sales;

  const double tax = .09;
  float sales_tax;

  float total_amount;

  cout<<" This program calculates the sales tax of a transaction given the sale amount and the total amount due \n";

  cout<<" please enter the sales amount: ";

  cin>>sales;

  sales_tax = sales * tax;

  total_amount = sales_tax+sales;

  cout<<" The sales tax is $" << sales_tax <<  " \n";

  cout<<" Your total amount is $"<< total_amount <<"\n";

  return 0;


}
