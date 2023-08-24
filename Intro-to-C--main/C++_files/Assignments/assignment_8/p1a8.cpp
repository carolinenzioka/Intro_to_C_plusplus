#include <iostream>
using namespace std;

// ---------------------------- Class Definition ---------------------------- //

    class Money    // Begin with capital letter by convention
    {
        private:
            int dollar;
            int cents;                      // Data Member
        public:
            // Member Functions
            double get_amount() const;          // Accessor (getter)
            void set_dollar(int value);      // Mutator (setter)
            void set_cents(int value);      // Mutator (setter)
    };

// ----------------------- Member Function Definitions ---------------------- //

// Note - The symbol "::" is called the "class scope" symbol.

    double Money :: get_amount() const
    {
      float changer, add;
      changer = cents/100.00;
      add = changer + dollar;

      return add;
    }
    void Money :: set_dollar(int value)
    {
        dollar = value;
    }


    void Money :: set_cents(int value)
    {
        cents = value;
    }

// ------------------------ Object Application Section ---------------------- //

int main()
{
//  Note - The symbol "." is called the "member selector operator".
    float bills,cent,bills1,cent1;

    cout<<"please enter the dollar amount:";
    cin>>bills;
    cout<<"Please enter change amount:";
    cin>>cent;
    cout<<"please enter the dollar amount again:";
    cin>>bills1;
    cout<<"Please enter change amount again:";
    cin>>cent1;


    Money money_1;
    money_1.set_dollar(bills);
    money_1.set_cents(cent);

    cout<<"Your amount is $"<<money_1.get_amount()<<endl;

    Money money_2;
    money_2.set_dollar(bills1);
    money_2.set_cents(cent1);

    cout<<"Your amount is $"<<money_2.get_amount()<<endl;


  return 0;
}
