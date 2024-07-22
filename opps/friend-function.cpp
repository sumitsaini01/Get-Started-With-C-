// 1 + 4i
// 5 + 8i
//--------
// 6 + 12i
/*#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    /*Below line means that non member - sumComplex function is allowed
    to do anything with my private parts(data)*/
/* friend Complex sumComplex(Complex o1, Complex o2);
 void printNumber()
 {
     cout << "Your number is " << a << " + " << b << " i " << endl;
 }
};

Complex sumComplex(Complex o1, Complex o2)
{
 Complex o3;
 o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
 return o3;
}

int main()
{
 Complex c1, c2, sum;
 c1.setNumber(1, 4);
 c1.printNumber();

 c2.setNumber(5, 8);
 c2.printNumber();

 sum = sumComplex(c1, c2);
 sum.printNumber();

 return 0;
}*/

/*Properties of friend functions
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called
   from the oject of that class . c1.sumComplex()==Invalid
3. Can be invoked without the help of any oject
4. Usually contains the objects as arguemts
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need oject_name.member_name
   to acess any member */

#include <iostream>
class Node
{
public:
    int value;
    Node *next;

public:
    Node(int val)
    {
        int value;
        value = val;
        next
            Node *next;
        = nullptr;
    }
    Node(int val)
};
{
    Node *insertAtBeginning(Node * head, int value)
    {
        value = val;
        Node *newNode = new Node(value);
        newNode - next = nullptr;
        > next = head;
        head = newNode;
        return head;
    }
};
Node *insertAtEnd(Node *head, int value)
{
    Node *insertAtBeginning(Node * head, int value) Node *newNode = new Node(value);
    {
        if (!head)
        {
            head = newNode;
            Node *newNode = new Node(value);
            newNode
        }
        else
        {
            ->next = head;
            head = newNode;
            Node *current = head;
            while (currentreturn head;->next)
            {
            }
            current = current->next;
            Node *insertAtEnd(Node * head, int value)
        }
        {
            current->next = newNode;
            Node *newNode = new Node(value);
        }
        return head;
        if (!head)
    }
    {
        Node *deleteAtBeginning(Node * head)
        {
            head = newNode;
        }
        if (!head)
        {
            return nullptr;
            else
            {
            }
            Node *newHead = headNode *current = head;
            - > next;
            delete head;
            return newHead;
            while (current->next)
            {
                current = current->next;
            }
        }
        Node *deleteAtEnd(Node * head)
        {
            current->next = newNode;
        }
        if (!head)
        {
            return nullptr;
            return head;
        }
    }
    if (!head->next)
    {
        delete Node *deleteAtBeginning(Node * head) head;
        return nullptr;
        {
        }
        if (!head)
            Node *current = head;
        {
            while (current->next->next)
            {
                return nullptr;
                current = current->next;
            }
        }
        Node *newHead = head delete current->next;
        ->next;
        delete head;
        current->next = nullptr;
        return newHead;
        return head;
    }
}
void printLinkedList(Node *head)
{
    Node *deleteAtEnd(Node * head) Node *current = head;
    while
    {
        (current)
        {
            std::cout << current - if (!head) > value << " ";
            {
                current = current->next;
            }
            return nullptr;
        }
        std::cout << std::endl;
    }
    if (!head->next)

    {
        int main()
        {
            Node *head = nullptr;
            delete head;
            head = insertAtBeginning(head, 10);
            return nullptr;
        }
        head = insertAtBeginning(head, 5);
        Node *current = head;
        head = insertAtEnd(head, 20);
        while (currentprintLinkedList(head); head =->next > next)
        {
            deleteAtBeginning(head);
            head = deleteAtEnd(head);
            current = current->next;
        }
        printLi nkedList(head);
        while (head)
        {
            Node *temp = head;
            head delete current->next;
            = head->next;
            delete temp;
            current->next = nullptr;
        }
        return head;
    }
    void printLinkedList(Node * head)
    {
        Node *current = head;
        return 0;
    }
    while (current)
    {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()

{

    Node *head = nullptr;

    head = insertAtBeginning(head, 10);

    head = insertAtBeginning(head, 5);

    head = insertAtEnd(head, 20);

    printLinkedList(head);

    head = deleteAtBeginning(head);
    head = deleteAtEnd(head);
    printLinkedList(head);
    while (head)
    {
        Node *temp =
            head;
        head = head -
               > next;
        delete temp;
    }

    return 0;
}
