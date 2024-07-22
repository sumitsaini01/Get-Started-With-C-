#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of this employee is " << id << endl;
    }
};
int main()
{
    //making array of objects of the class employee
    Employee fb[4];
   /* fb[0].setId();
    fb[0].getId();

    fb[1].setId();
    fb[1].getId();

    fb[2].setId();
    fb[2].getId();
    
    fb[3].setId();
    fb[3].getId();*/


    //we can use both methods 

    for (int i=0;i<4;i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}