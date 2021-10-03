#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: " ;
    cin>> number;
    int original_number = number;
    number = number* 2;
    number = number + 9;
    number = number - 3;
    number = number /2;
    number = number - original_number;
    number = number % 3;
    cout << "The result is: " << number << endl;
    return 0;
}
