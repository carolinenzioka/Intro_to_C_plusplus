#include<iostream>
using namespace std;

main()
{int months;

cout<<"This program accepts an integer from 1 to 12 and prints out the corresponding month.\n";
cout<<"Enter an interger from 1-12:";
cin>>months;

if(months==1)
{cout<<"January\n";}

else if (months==2)
{cout<<"Febuary\n";}
else if (months==3)
{cout<<"March\n";}
else if (months==4)
{cout<<"April\n";}
else if (months==5)
{cout<<"May\n";}
else if (months==6)
{cout<<"June\n";}
else if (months==7)
{cout<<"July\n";}
else if (months==8)
{cout<<"August\n";}
else if (months==9)
{cout<<"September\n";}
else if (months==10)
{cout<<"October\n";}
else if (months==11)
{cout<<"November\n";}

else
{cout<<"December\n";}

return 0;
}
