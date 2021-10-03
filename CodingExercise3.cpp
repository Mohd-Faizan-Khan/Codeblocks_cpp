#include<iostream>
using namespace std;
int main()
{
    int d;
    float m;
    int y;
    std::cout<<"Enter your date of birth ";
    std::cin>>d;
    std::cin>>m;
    std::cin>>y;
    std::cout<<"You are so cute!! \n:)"<<endl;
    if(m=1)
    {
        std::cout<<"Your birth month is January and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m=2)
    {
       std::cout<<"Your birth month is February and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m=3)
    {
        std::cout<<"Your birth month is March and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m=4)
    {
        std::cout<<"Your birth month is April and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m=5)
    {
        std::cout<<"Your birth month is May and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m=6)
    {
        std::cout<<"Your birth month is June and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=7)
    {
        std::cout<<"Your birth month is July and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=8)
    {
        std::cout<<"Your birth month is August and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=9)
    {
        std::cout<<"Your birth month is September and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=10)
    {
        std::cout<<"Your birth month is October and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=11)
    {
        std::cout<<"Your birth month is November and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
     else if(m=12)
    {
        std::cout<<"Your birth month is December and your Date of Birth is "<<d<<"/"<<m<<"/"<<y;
        return 0;
    }
    else if(m>12);
    {
       std::cout<<"You entered a wrong month number!";
    }
    return 0;
}
