#include <iostream>
using namespace std;
int main()
{
    const int legal_age {18};
    cout << boolalpha;

    cout << "\n=============Lets see you can drive or not?==================\n"<< endl;

    int age{};
    bool has_car{};
    cout<< "Please enter your age: ";

    cin>> age;


    if (age>= legal_age)
    {
        cout << "Do you have  car : 1 (Yes) or 0 (No) ";
        cin >> has_car ;
        if (has_car){
        cout << "\nYes you can drive!"<< endl;
      }  else
            cout << "You must have a car to drive!\n "<< "Bring a car with you"<< endl;
    }
    else {
        cout << "\nSorry, you can't drive!\n"<< endl;
        int diff {legal_age - age};
        cout << "Please come back in "<< diff << " years and take a car along with you." << endl;
    }
    return 0;
}
