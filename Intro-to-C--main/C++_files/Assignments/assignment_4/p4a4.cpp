#include <iostream>
using namespace std;

main()
{
char p_one,p_two;
char R,r,rock,P,p,Paper,S,s,sciccors;

cout<<"This is a rock paper scissors program\n";
cout<<"player one enter your move (R,P,S):";
cin>>p_one;
cout<<"Player two enter your move(R,P,S):";
cin>>p_two;

if (((p_one=='R')||(p_one=='r'))&&((p_two=='S')||(p_two=='s')))
{cout<<" player one wins because Rock beats scissors \n";}

else if (((p_one=='S')||(p_one=='s'))&&((p_two=='P')||(p_two=='p')))
{cout<<" player one wins because scissor beats paper \n";}

else if (((p_one=='P')||(p_one=='p'))&&((p_two=='R')||(p_two=='r')))
{cout<<" player one wins because paper beats rock \n";}

else if (((p_one=='S')||(p_one=='s'))&&((p_two=='P')||(p_two=='p')))
{cout<<" player one wins because scissors beats paper \n";}

else if (((p_one=='S')||(p_one=='s'))&&((p_two=='S')||(p_two=='s')))
{cout<<" No one wins\n";}

else if (((p_one=='P')||(p_one=='p'))&&((p_two=='P')||(p_two=='p')))
{cout<<" No one wins\n";}

else if (((p_one=='R')||(p_one=='r'))&&((p_two=='R')||(p_two=='r')))
{cout<<" No one wins\n";}

else
{cout<<"Player two wins\n";}

  return 0;
}
