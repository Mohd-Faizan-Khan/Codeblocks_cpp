#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec{1,2,3};
    int result{};


    for (int i=1; i<= vec.size(); ++i)
    {
        for (int j=i+1; j<= vec.size(); ++j)
        {
            cout << i << " * " << j << " = " << i*j << endl;

            result += i*j;

            cout << result << endl;
            cout <<  endl;
        }

    }
    return 0;
}
