
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct STUDENT
{
    string name;
    int sub_marks[3];
    int total_marks;
};

int main()
{
    STUDENT std1;

    cout << "Student name : ";
    getline(cin,std1.name);

    cout << "Marks in Chemistry : ";
    cin >> std1.sub_marks[0];

    cout << "Marks in Biology : ";
    cin >> std1.sub_marks[1];

    cout << "Marks in Physics : ";
    cin >> std1.sub_marks[2];

    std1.total_marks = std1.sub_marks[0] + std1.sub_marks[1] + std1.sub_marks[2];


    cout << "\n\n\t\tStudent Details\n";
    cout << "Name : " << std1.name << endl;
    cout << "Chemistry : " << std1.sub_marks[0] << endl;
    cout << "Biology : " << std1.sub_marks[1] << endl;
    cout << "Physics : " << std1.sub_marks[2] << endl;
    cout << "Total marks : " << std1.total_marks << endl;

}