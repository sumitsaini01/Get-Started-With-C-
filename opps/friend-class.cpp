/*#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);

    //Aliter: Declaring the entire Calculator class as a friend class
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    return 0;
}*/
// singly
/*#include <iostream>
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int val)
    {
        value = val;
        prev = nullptr;
        next = nullptr;
    }
};
Node *insertAtBeginning(Node *head, int value)
{
    Node *newNode = new Node(value);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    return head;
}
Node *insertAtEnd(Node *head, int value)
{
    Node *newNode = new Node(value);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    return head;
}
Node *deleteAtBeginning(Node *head)
{
    if (!head)
    {
        return nullptr;
    }
    Node *newHead = head->next;
    if (newHead)
    {
        newHead->prev = nullptr;
    }
    delete head;
    return newHead;
}
Node *deleteAtEnd(Node *head)
{
    if (!head)
    {
        return nullptr;
    }
    if (!head->next)
    {
        delete head;
        return nullptr;
    }
    Node *current = head;
    while (current->next)
    {
        current = current->next;
    }
    if (current->prev)
    {
        current->prev->next = nullptr;
    }
    delete current;
    return head;
}
void printLinkedListForward(Node *head)
{
    Node *current = head;
    while (current)
    {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
void printLinkedListBackward(Node *tail)
{
    Node *current = tail;
    while (current)
    {
        std::cout << current->value << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 5);
    head = insertAtEnd(head, 20);
    printLinkedListForward(head);
    Node *tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    printLinkedListBackward(tail);
    head = deleteAtBeginning(head);
    head = deleteAtEnd(head);
    printLinkedListForward(head);
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
*/
#include <iostream>
using namespace std; 

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " : " << freq[i] << endl;
    }

    return 0;
}
#include <iostream>    
using namespace std; 
 
int power(int x, unsigned int n) 
 
 
{ 
    int temp; 
    if (n == 0) 
    { 
        return 1; 
    } 
    temp = power(x, n / 2); 
    if (n % 2 == 0) 
    { 
        return temp * temp; 
    } 
    else 
    { 
        return x * temp * temp; 
    } 
} 
 
int main() 
{ 
    int x; 
    cout << "Enter value of x" << endl; 
    cin >> x; 
    int n; 
    cout << "Enter value of n" << endl; 
    cin >> n;     cout << power(x, n);     return 0; 
} 
