#include <iostream>
#include <algorithm>
using namespace std;

// ---------------------------- Class Definition ---------------------------- //

    class Fraction    // Begin with capital letter by convention
    {
        private:
            int numerator;
            int denominator;                      // Data Member
        public:
            // Member Functions
            double get_float() const;          // Accessor (getter)
            void get_frac();              // Accessor (getter)
            void set_numerator(int value);      // Mutator (setter)
            void set_denominator(int value);      // Mutator (setter)

    };

// ----------------------- Member Function Definitions ---------------------- //

// Note - The symbol "::" is called the "class scope" symbol.

    double Fraction :: get_float() const
    {
      float num,dem;
      num = numerator/1.0;
      dem = denominator/1.0;

      return (num/dem);
    }
    void Fraction :: get_frac()
    {
      int gcd,num,dem;
      gcd= __gcd(numerator,denominator);
      num= numerator/gcd;
      dem= denominator/gcd;
      cout<<"The simplified fraction is:"<<num<<"/"<<dem<<endl;

    }

    void Fraction :: set_numerator(int value)
    {
        numerator = value;
    }


    void Fraction :: set_denominator(int value)
    {
        denominator = value;
    }


// ------------------------ Object Application Section ---------------------- //

int main()
{
//  Note - The symbol "." is called the "member selector operator".
    int dem2,num2,num1,dem1;
    cout<<"input numerator:";
    cin>>num1;
    cout<<"input denominator:";
    cin>>dem1;
    cout<<"input numerator again:";
    cin>>num2;
    cout<<"input denominator again:";
    cin>>dem2;

    Fraction fraction1;
    fraction1.set_numerator(num1);
    fraction1.set_denominator(dem1);
    cout<<"The decimal is:"<<fraction1.get_float()<<endl;
    fraction1.get_frac();

    Fraction fraction2;
    fraction2.set_numerator(num2);
    fraction2.set_denominator(dem2);
    cout<<"The decimal is:"<<fraction2.get_float()<<endl;
    fraction2.get_frac();

return 0;
}
