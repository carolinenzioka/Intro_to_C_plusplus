#include <iostream>
#include <algorithm>
using namespace std;

// ---------------------------- Class Definition ---------------------------- //

    class Fraction    // Begin with capital letter by convention
    {
        private:
            int denominator2,numerator2;
            int numerator;
            int denominator;                      // Data Member
        public:
            // Member Functions
            double get_float() const;          // Accessor (getter)
            void  get_frac();               // Accessor (getter)
            int  get_subtract();
            int  get_add();
            int  get_gcd(int value);
            void set_numerator(int value,int value2);      // Mutator (setter)
            void set_denominator(int value,int value2);      // Mutator (setter)
            Fraction (int value,int value1);      // Mutator (setter)
            Fraction(int value);             //parameter constructor
            Fraction();                           //Default constructor
            Fraction(const Fraction & copy);      // copy constructor
    };

// ----------------------- Member Function Definitions ---------------------- //

// Note - The symbol "::" is called the "class scope" symbol.

    int Fraction::get_subtract()
    {
      int num1,num2,sub;
        if(denominator!=denominator2)
          {
            num1=numerator*denominator2;
            num2=numerator2*denominator;
              if(num1>=num2)
                {
                  sub=num1-num2;
                }
              else(num1<=num2);
                {
                sub=num2-num1;
                }
          }
        else if(denominator==denominator2)
          {
            if(numerator>=numerator2)
              {
                sub=numerator-numerator2;
              }
            else(numerator<=numerator2);
              {
                sub=numerator2-numerator;
              }
          }

      return sub;
    }
  int Fraction::get_add()
    {
      int num1,num2,add;
      if(denominator!=denominator2)
        {
          num1=numerator*denominator2;
          num2=numerator2*denominator;
          add=num1+num2;
        }
      else
        {
          add=numerator+numerator2;

        }

      return add;
    }
  int Fraction :: get_gcd(int value)
      {
        int gcd,num,dem,num1,dem1;
        num1=value;
        if(denominator!=denominator2)
          {
            dem1=denominator*denominator2;
          }
        else
        {
          dem1=denominator;
        }
        gcd= __gcd(num1,dem1);
        num= num1/gcd;
        dem= dem1/gcd;
        cout<<num<<"/"<<dem<<endl;

      }



    void Fraction :: set_numerator(int value,int value2)
    {
        numerator = value;
        numerator2=value2;
    }


    void Fraction :: set_denominator(int value,int value2)
    {
        denominator = value;
        denominator2=value2;
    }



    Fraction::Fraction()// default
    :numerator(0),denominator(1)

    {
      cout<<"The default is"<<numerator<<"/"<<denominator<<endl;
    }

    Fraction :: Fraction(int value,int value1)//two parameter
    :numerator(value),denominator(value1)
    {
      cout<<"the parameters were set"<<endl;
    }

     Fraction :: Fraction(int value)// n/1
     :numerator(value),denominator(1)
    {
      cout<<"the fraction is:"<<numerator<<"/1"<<endl;
    }

    Fraction :: Fraction(const Fraction & copy)//
    :numerator(copy.numerator),denominator(copy.denominator)
    {
      cout<<"this is a copy"<<endl;
    }



// ------------------------ Object Application Section ---------------------- //

int main()
{
//  Note - The symbol "." is called the "member selector operator".
    int dem2,num2,num1,dem1;
    cout<<"input numerator of your first fraction:";
    cin>>num1;
    cout<<"input denominator of your first fraction:";
    cin>>dem1;
    cout<<"input numerator of your second fraction:";
    cin>>num2;
    cout<<"input denominator of your second fraction:";
    cin>>dem2;
    cout<<endl;


    Fraction fraction;
    fraction.set_numerator(num1,num2);
    fraction.set_denominator(dem1,dem2);
    fraction.get_add();
    fraction.get_subtract();
    cout<<"the two fractions added together are: ";
    fraction.get_gcd(fraction.get_add());
    cout<<endl;
    cout<<"The difference between the two fractions are: ";
    fraction.get_gcd(fraction.get_subtract());




return 0;
}
