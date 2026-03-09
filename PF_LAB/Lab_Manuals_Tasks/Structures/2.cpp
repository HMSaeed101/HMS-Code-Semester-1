#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct STUDENT
{
    string name;
    int age;
    string phone;
    string father_name;
};

int main()
{
    STUDENT std[6];

    for(int i=0; i<6; i++)
    {
        cout << "__________________________\n";
        cout << "Student # " << i+1 << endl;
        cout << "Name : ";
        getline(cin,std[i].name);

        cout << "Age : ";
        cin >> std[i].age;

        cout << "Phone Number : ";
        cin >> std[i].phone;

        cout << "Father's Name : ";
        cin.ignore();
        getline(cin,std[i].father_name);
    }

    cout << "\n\t\tStudent's Data\n";
    for(int i=0; i<6; i++)
    {
        cout << "__________________________\n";
        cout << "Student # " << i+1 << endl;
        cout << "Name : " << std[i].name << endl;
        cout << "Age : " << std[i].age << endl;
        cout << "Phone Number : " << std[i].phone << endl;
        cout << "Father's Name : " << std[i].father_name << endl;
    }

}