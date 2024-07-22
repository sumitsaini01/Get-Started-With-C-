// static member function

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
    static void getcount() // static member function can only access the static member/function
    {
        cout << "The of the count is " << count << endl;
    }
};

int student ::count; // default value is 0

int main()
{
    student sumit, inayat, afreen;
    sumit.setdata();
    sumit.getdata();
    student ::getcount();

    inayat.setdata();
    inayat.getdata();
    student ::getcount();

    afreen.setdata();
    afreen.getdata();
    student ::getcount();

    return 0;
}