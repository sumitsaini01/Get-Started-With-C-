#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    char gender;

    void setname(string s)
    {
        name = s;
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
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "Name :";
        cin >> s;
        arr[i].setname(s);

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