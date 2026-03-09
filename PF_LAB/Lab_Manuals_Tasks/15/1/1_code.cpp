#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream myfile("Personal_Info.txt");

    if (!myfile.is_open())
    {
        cout << "Error: File Not be opened.\n";
        return 1;
    }

    string name, gender, age, address, cellphone;

    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent # " << i + 1 << "\n";
        cout << "----------------------------------------\n";

        myfile << "Student # " << i + 1 << "\n";
        myfile << "----------------------------------------\n";

        cout << "Name: ";
        getline(cin, name);
        myfile << "Name: " << name << "\n";

        cout << "Gender: ";
        getline(cin, gender);
        myfile << "Gender: " << gender << "\n";

        cout << "Age: ";
        getline(cin, age);
        myfile << "Age: " << age << "\n";

        cout << "Address: ";
        getline(cin, address);
        myfile << "Address: " << address << "\n";

        cout << "Cellphone: ";
        getline(cin, cellphone);
        myfile << "Cellphone: " << cellphone << "\n\n";
    }

    myfile.close();
    cout << "\nData saved successfully.\n";

    return 0;
}
