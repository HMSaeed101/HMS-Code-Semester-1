

#include <iostream>
#include <cstdlib>
using namespace std;

struct Person
{
    char name[15];
    int age;
};

int main()
{
    Person person1, person2;
    int index;

    // Input data for first person
    cout << "Enter Name:" << endl;
    cin >> person1.name;

    cout << "Enter Age:" << endl;
    cin >> person1.age;

    // Copy age directly
    person2.age = person1.age;

    // Copy name character by character
    for (index = 0; person1.name[index] != '\0'; index++)
    {
        person2.name[index] = person1.name[index];
    }
    // Add null character at the end
    person2.name[index] = '\0';

    // Output copied data
    cout << "Name in person2 is: " << person2.name << endl;
    cout << "Age in person2 is: " << person2.age << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
