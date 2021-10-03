#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome to Khan's Carpet Cleaning Service"<<endl;
    cout<<"\nHow many small rooms you would like cleaned? "<<endl;

    const double small_room_cost{25};
    const double large_room_cost{35};
    const int pack_expiry{30};

    int number_of_small_rooms;
    cin >> number_of_small_rooms;

    cout<<"\nHow many large rooms you would like cleaned? "<<endl;
    int number_of_large_rooms;
    cin >> number_of_large_rooms;

    cout<< "Estimate for Carpet cleaning service"<<endl;
    cout<< "Number of Small rooms: "<< number_of_small_rooms<<endl;
    cout<< "Number of Large rooms: "<< number_of_large_rooms<<endl;
    cout<< "Price per Small room:$ " << small_room_cost << endl;
    cout<< "Price per Large room:$ " << large_room_cost << endl;
    cout<< "Cost :$"<<( number_of_small_rooms * small_room_cost ) + (number_of_large_rooms * large_room_cost)<<endl;
    cout<< "Tax :$"<< (( number_of_small_rooms * small_room_cost ) + (number_of_large_rooms * large_room_cost))* 0.06 <<endl;
    cout<<"================================================================================" << endl;
    cout<< "Total Estimate:$ "<< ( number_of_small_rooms * small_room_cost ) + (number_of_large_rooms * large_room_cost) + (( number_of_small_rooms * small_room_cost ) + (number_of_large_rooms * large_room_cost))* 0.06<< endl;
    cout<< "This Estimate is only Valid for: " << pack_expiry <<" Days"<<endl;
    return 0;
}
