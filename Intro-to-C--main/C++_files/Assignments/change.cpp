#include <iostream>
#include<cmath>
#include<limits>
using namespace std;
int main()
{

  float item_price1,item_price2,item_price3;
  float item_total;
  float item_tendered;
  float change;

  cout<<" This program calculates the change of a transaction \n";
  cout<<" please enter the prices of your items amount: ";
  cin>>item_price1>>item_price2>>item_price3;
  item_total= item_price1+item_price2+item_price3;
  cout<<" The total is $" << item_total <<  " \n";

  cout<<" How much money will you be paying with today:";
  cin>>item_tendered;
  change= item_tendered-item_total;

  int fifty,twenty,dollar,tens,fives,ones,pennies,nickle,dime,quarters,amt1;

  dollar =(change*100)/100;
  amt1=(change-dollar)*100;

  fifty=(dollar/50);
  dollar=(dollar%50);
  twenty=(dollar/20);
  dollar=(dollar%20);
  tens=(dollar/10);
  dollar=(dollar%10);
  fives=(dollar/5);
  dollar=(dollar%5);
  ones=dollar;

  quarters=(amt1/25);
  amt1 = (amt1%25);
  dime = (amt1/10);
  amt1= (amt1%10);
  nickle = (amt1/05);
  amt1 = (amt1%05);
  pennies = (amt1/01);

  cout<<"Your change is: \n";
  cout<<fifty<<"fifties\n";
  cout<<twenty<<"twenties\n";
  cout<< tens <<"tens \n";
  cout<<fives<<"fives\n";
  cout<<dollar<<"dollars\n";
  cout<< quarters<< "quarters \n";
  cout<< dime<<"dimes\n ";
  cout<<nickle<<"nickles\n ";
  cout<<pennies<<"pennies " <<"\n";

  return 0;
}
