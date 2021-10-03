#include<iostream>
using namespace std;
int main()
{
    cout<<"Employee name age and hourly wage data"<<endl;
    cout<<"Enter your Name:"<<endl;
    string employee_name;
    cin>>employee_name;
    cout<<"Enter your Age"<<endl;
    int employee_age;
    cin>>employee_age;
    cout<<"Enter your hourly wage"<<endl;
    double hourly_wage;
    cin>>hourly_wage;
    cout<<employee_name<<" "<<employee_age<<" "<<hourly_wage<<endl;
    cout<<"End your monthly income is "<<hourly_wage*24*30;
    return 0;
}
