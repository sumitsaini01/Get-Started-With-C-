#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    char gender;
    void getname()
    {
        cout << name << endl;
    }

    void printinfo()
    {
        cout << "Name :";
        cout << name << endl;

        cout << "Age :";
        cout << age << endl;

        cout << "Gender :";
        cout << gender << endl;
    }
};

int main()
{
}