#include <iostream>
using namespace std;
int main()
{
    int day_code{};
    cout << "Please enter the day code of the week(0-7): ";
    cin >> day_code;

    switch (day_code)
    {
    case 0:
        cout<< "This day of the week is Sunday" << endl;
        break;

        case 1:
        cout << "This day of the week is Monday" << endl;
        break;

        case 2:
        cout << "This day of the week is Tuesday"<< endl;
        break;

        case 3:
        cout<< "This day of the week is Wednesday" << endl;
        break;

        case 4:
        cout<< "This day of the week is Thursday" << endl;
        break;

        case 5:
        cout<< "This day of the week is Friday" << endl;
        break;

        case 6:
        cout<< "This day of the week is Saturday" << endl;
        break;


        default:
            cout <<"Sorry invalid" << endl;
        }

        return 0;
}
