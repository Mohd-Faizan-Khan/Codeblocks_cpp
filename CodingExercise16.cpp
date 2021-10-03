#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const vector <int> vec{};
    int index{};
    int count;

    cout<< "Enter the number -99: ";
    cin >> index;


    while (index < vec.size() || vec.at(index) != -99  )
        {
            if (vec.size() >= -99)
                cout << "You entered the number: -99 \nGOOD!!" << endl;
            else
                ++count;
                ++index;
        }
    return 0;
}
