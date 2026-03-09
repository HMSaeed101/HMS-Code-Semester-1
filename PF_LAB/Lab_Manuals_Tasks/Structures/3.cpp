#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct MENU
{
    int menu_id;
    string food_name;
    int food_price;
};
struct ORDER
{
    int order_id;
    int food_id[5];
};
int main()
{
    MENU menu[5] = 
    {
        {101, "Burgers", 200},
        {102, "Pizza", 400},
        {103, "Paratha", 100},
        {104, "Chips", 100},
        {105, "Juice", 50}
    };

    cout << "\t\tMENU\n";
    cout << "ID\t Food\t\t Price\n";
    for(int i=0; i<5; i++)
    {
        cout << menu_id;
    }

    ORDER order[5];

    // USER ORDER Entry
    cout << "\n\t\tOrder Entry Details\n";
    for(int i=0; i<5; i++)
    {
        cout << "Enter Order ID : ";
        cin >> order[i].order_id;

        cout << "Enter at most 5 Food ID's you want to Order : ";
        for(int j=0; j<5; j++)
        {
            cout << "Order # " << j+1 << endl;
            cin >> order[i].food_id[j];
        }
    }


    // Displaying Costumer Orders
    cout << "\n--- Orders ---\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Order ID: " << order[i].order_id << "\nFoods: ";
        for(int j = 0; j < 5; j++)
        {
            // Match food ID with menu name
            for(int k = 0; k < 5; k++)
            {
                if(order[i].food_id[j] == menu[k].menu_id)
                    cout << menu[k].food_name << " ";
            }
        }
        cout << endl;
    }

    
}