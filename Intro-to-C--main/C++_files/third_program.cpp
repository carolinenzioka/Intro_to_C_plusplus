/* *****************************************************************
* This program gets the values for two numbers from the keyboard, *
* adds them together, and prints the result to the monitor. *
**************************************************************** */

# include <iostream>
using namespace std;

int main()
{
// Variable Declarations
int num_1;
int num_2;
int sum;

// Get User Input
cout << endl;
cout << "Enter an integer: ";
cin >> num_1;
cout << "Enter another integer: ";
cin >> num_2;

// Calculate Sum
sum = num_1 + num_2;

// Print to Screen
cout << endl;
cout << "The sum of " << num_1 << " and " << num_2 << " is " << sum << ".";
cout << endl;
cout << endl;

return 0;
}
