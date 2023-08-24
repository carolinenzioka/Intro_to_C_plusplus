#include <iostream>
using namespace std;

main()
{
int temp;

cout<<"This program outputs a message depending on the given message";
cout<<"Enter the temperature of the room: ";
cin>>temp;

if (temp>90)
{cout<<"visit a neighbor\n";}

else if ((temp<=90) && (temp>80))
{cout<<"Turn on air conditioning\n";}

else if ((temp<=80) && (temp>70))
{cout<<"Do nothing\n";}

else if ((temp<=70)&& (temp>55))
{cout<<"Turn on heat\n";}

else
{cout<<"visit a neighbor\n";}

return 0;
}
