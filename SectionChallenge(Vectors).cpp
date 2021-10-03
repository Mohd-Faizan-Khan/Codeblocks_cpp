#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> vector_1(0);
    vector <int> vector_2(0);

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout<< "The size of the vector 1 is "<<vector_1.size()<<endl;

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout<< "The size of the vector 2 is "<<vector_2.size()<<endl;

    vector <vector <int>> vector_2d (0);

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout<< "The elements of vector 2d are \n"<< vector_2d.at(0).at(0) <<" "<<vector_2d.at(0).at(1)<<endl;
    cout <<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<< endl;

    vector_1.at(0)=1000;


    cout<< "Now, The elements of vector 2d are \n"<< vector_2d.at(0).at(0) <<" "<<vector_2d.at(0).at(1)<<endl;
    cout <<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<< endl;
    cout<< "The elements of vector 1 are \n"<< vector_1.at(0) << " " <<vector_1.at(1) << endl;

    return 0;
}
