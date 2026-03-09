#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile("Students.txt");

    struct STUDENT
    {
        string name;
        int marks[3];
    };
   
    STUDENT std[2]; 

    for(int i=0; i<2; i++)
    {
        myfile << "\n--------------------\n"<<  "Student # "  << i+1 << "\n";
        cout << "\n--------------------\n"<<  "Student # "  << i+1 << "\n";

        cout << "Name : ";
        getline(cin,std[i].name);
        myfile << "Name : " << std[i].name << "\n" ;

        cout << "Marks of Physics : ";
        cin >> std[i].marks[0];
        myfile << "Marks of Physics : "<< std[i].marks[0] << "\n";

        cout << "Marks of Chemistry : ";
        cin >> std[i].marks[1];
        myfile << "Marks of Chemistry : " << std[i].marks[1] << "\n";

        cout << "Marks of Biology : ";
        cin >> std[i].marks[2];
        myfile << "Marks of Biology : " << std[i].marks[2] << "\n";

        int total_marks = std[i].marks[0] + std[i].marks[1] + std[i].marks[2]; 

        myfile << "Total Marks : " << total_marks << "\n"; 


        if(total_marks > 220)
        {
            myfile << "Grade : A \n";
        }
        else if(total_marks > 160)
        {
            myfile << "Grade : B \n";
        }
        else if(total_marks > 100)
        {
            myfile << "Grade : C \n";
        }
        else
        {
            myfile << "Grade : F \n";
        }

        cin.ignore();
        cout << endl ;
        myfile << endl ;
    }
    myfile.close();

}