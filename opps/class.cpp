#include <iostream>
using namespace std;

class students
{
    int contact;
    int fee;
    static int count;

public: //--> by default all the members and memebrs functions are private in class
    string name;
    string UID;

    void addContact()
    {
        cout << "Enter the mobile number of the student" << endl;
        cin >> contact;

        cout << "Enter the fee of the student" << endl;
        cin >> fee;
    }

    void display()
    {
        getline(cin, name); //-->getline function is used to get full string(words after white spaces also)
        cin >> name;
        cout << "The name of the student is  " << name << " and the UID of this student is  " << UID << endl;
        cout << "The number of students is " << count << endl;
        cout << " Contact number is " << contact << endl;
        cout << "Fee is " << fee << endl;
        count++;
    }
} sumit, sonu, ritik, ajay, shreyash; //--> we can create objects just after the class
int students ::count = 1;             //--> declare the static members out side of the class

int main()
{
    sumit.addContact();
    sumit.display();

    sonu.addContact();
    sonu.display();

    ritik.addContact();
    ritik.display();

    ajay.addContact();
    ajay.display();

    shreyash.addContact();
    shreyash.display();

    return 0;
}