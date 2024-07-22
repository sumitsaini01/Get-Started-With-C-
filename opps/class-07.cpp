//static data member 

#include <iostream>
using namespace std;

class student
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the Id of this student is " << id << " and the number of this student is " << count << endl;
    }
};

int student ::count; // default value is 0

int main()
{
    student sumit, inayat, afreen;
    sumit.setdata();
    sumit.getdata();

    inayat.setdata();
    inayat.getdata();

    afreen.setdata();
    afreen.getdata();

    return 0;
}