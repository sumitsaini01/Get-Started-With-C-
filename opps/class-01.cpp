#include <iostream>
using namespace std;

class Students
{
public:
    string name;
    int age;
    char gender;

    void printinfo()
    {
        cout << "Name :";
        cout << name << endl;

        cout << "Age :";
        cout << age << endl;

        cout << "Gender :";
        cout << gender << endl;
    } // we can also define the objects just after the class or with the class like this
};    // rohan,ajay,sumit..... this will also correct

int main()
{
    // creating objects using arrays

    Students arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name :";
        cin >> arr[i].name;

        cout << "Age :";
        cin >> arr[i].age;

        cout << "Gender :";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printinfo();
    }

    return 0;
}