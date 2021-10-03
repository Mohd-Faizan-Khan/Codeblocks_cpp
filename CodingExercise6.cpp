#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> vec{10,20,30,40,50};
    cout<<"The integer at the index 0 is "<<vec.at(0)<<endl;
    cout<<"The integer at the index 4 is "<<vec.at(4)<<endl;

    cout<<"Enter new integer for index 0 "<<endl;
    cin>>vec.at(0);
    cout<<"Enter new integer for index 4 "<<endl;
    cin>>vec.at(4);

    cout<<"The new integer at the index 0 is "<<vec.at(0)<<endl;
    cout<<"The new integer at the index 4 is "<< vec.at(4)<<endl;

    cout<<"The new vector is: "<<endl;
    cout<<vec.at(0)<<"\n"<<vec.at(1)<<"\n"<<vec.at(2)<<"\n"<<vec.at(3)<<"\n"<<vec.at(4)<<endl;
    return 0;
}
