#include <iostream>
using namespace std;

class students
{
private:
    int phoneno;

public:
    int age;
    int uid;

    // defining a function outside of a class

    void get(int phoneno); /*declaration of a function to access the private members of the class
                             we can also define the function inside the class*/

    // defining a fundtion inside a class
    void display()
    {
        cout << phoneno << endl;
        cout << age << endl;
        cout << uid << endl;
    }
};

void students ::get(int n1)
{
    phoneno = n1;
}

int main()
{
    students a;
    a.get(8);
    a.age = 20;
    a.uid = 07;
    a.display();

    return 0;
}