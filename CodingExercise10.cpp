#include <iostream>;
using namespace std;
int main()
{
    const int legal_age {18};

    cout << "\n===========Lets see you can drive or not?==================\n"<< endl;

    int age{};
    cout<< "Please enter your age: ";

    cin>> age;

    if (age>= legal_age)
        cout << "\nYes you can drive!"<< endl;

    else {
        cout << "\nSorry, you can't drive!\n"<< endl;
        double diff {legal_age - age};
        cout << "Please come back in "<< diff << " years" << endl;
    }
    return 0;
}
