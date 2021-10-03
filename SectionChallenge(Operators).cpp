#include<iostream>
using namespace std;
int main()
{
    int number_of_cents{0};
    const int dollars{100}, quaters{25}, dimes{10}, nickels{5}, pennies{1};
    cout << "Enter the amount of the Cents: ";
    cin>> number_of_cents;
    cout << "This money can be provided as\n";
    cout << "Dollars: "<< number_of_cents / dollars <<endl;
    cout << "Quaters: " << (number_of_cents % dollars) / quaters<< endl;
    cout << "Dimes: " << ((number_of_cents % dollars) % quaters) / dimes<< endl ;
    cout << "Nickels: "<< (((number_of_cents % dollars) % quaters) % dimes)/ nickels<< endl;
    cout << "Pennies: "<< ((((number_of_cents % dollars) % quaters) % dimes) % nickels ) / pennies<< endl;
    cout << endl;
    return 0;
}
