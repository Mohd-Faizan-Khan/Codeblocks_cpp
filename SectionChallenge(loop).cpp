#include<iostream>
#include <vector>
using namespace std;

int main()
{
    char user_in{};  //user input for the list
    int add_in{};    // user input for the  addition of values
    vector <int> vec{};
    int i;

    do
    {
        cout << "\nP - Print the numbers\nA - Add number \nM - Display the mean of numbers \nS - Display the smallest number \nL - Display the largest number \nQ - Quit"<< endl;
        cout << "Enter you choice: ";
        cin >> user_in;

        if (user_in == 'p'|| user_in== 'P') //to print the list
            if (vec.size() == 0)
                cout << "\n[] - The list is empty\n" << endl;
            else
                {cout << "\n[ ";
                for (auto val : vec)
                    cout << val << " ";
                    cout << "]\n" << endl;
                }
        else if (user_in == 'a'|| user_in == 'A')
           {
            cout << "\nEnter the number: ";
            cin>> add_in;
            vec.push_back (add_in);
            cout <<"\n"<< add_in << " is added.\n"<< endl;
           }
        else if (user_in == 'm' || user_in == 'M')
            if (vec.size()== 0)
                cout << "\nUnable to calculate the mean- NO DATA\n"<< endl;
            else
            {
                int total{};
                for (auto val : vec)
                    total += val;
                    cout << "\nThe mean of the data is: "<< static_cast<double>(total)/ vec.size() <<"\n" << endl;
            }
        else if (user_in == 's' || user_in == 'S')
            if (vec.size()== 0)
                cout << "\nSorry NO DATA" << endl;
            else
                {int smallest = vec.at(0);
                for (auto val: vec)
                    if (val < smallest)
                        smallest = val;
                        cout << "\nThe smallest number in the list is: "<< smallest << endl;
                }
        else if (user_in == 'l' || user_in == 'L')
            if (vec.size() == 0)
                cout << "\nSorry NO DATA"<< endl;
            else
            {
                int largest = vec.at(vec.size() - 1);
                for (auto val: vec )
                    if (val > largest)
                        largest = val;
                        cout << "\nThe largest number in the list is: "<< largest << endl;
            }
        else if (user_in == 'q' || user_in == 'Q')
            cout << "\nGood bye!!!"<< endl;

        else
            cout << "\n!!!!!!!!!!Invalid input!!!!!!!!!! \nPlease select from the list below" << endl;


    } while (user_in != 'Q' && user_in != 'q' );

    cout << "\n=================" << endl;
    return 0;
}
