#include<iostream>
using namespace std;
int main()
{
    int age{0}; // Age of the applicant
    bool parental_consent{false}; // Parental Consent about the work
    bool ssn{false}; // Valid Social Security Number
    bool accidents {false}; // Any accident details
    cout << boolalpha;

    cout << "Enter the age: "<< endl;
    cin >> age;
    cout << "Parental Consent: " << endl;
    cin>> parental_consent;
    cout<< "The valid security number: "<< endl;
    cin >> ssn;
    cout << "Enter number of accidents: "<< endl;
    cin >> accidents;
    if ((age >= 18 && !accidents) || (age > 15 && parental_consent) && ssn && !accidents)
        cout << "Yes, you can work."<< endl;

    cout << endl;
    return 0;
}
