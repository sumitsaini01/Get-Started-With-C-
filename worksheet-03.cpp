#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

void linkedlisttraverse(struct Node *ptr)
{
    while (ptr != NULL)

    {
        cout << "Element: " << ptr->data;
        cout << "\n";
        ptr = ptr->next;
    }
}

struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct Node *deleteatfirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteatindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - i; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteatend(struct Node *head)
{
    struct Node *end = head;
    struct Node *prev = NULL;
    while (end->next)
    {
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    free(end);
    return head;
}

void push(Node **head_ref, int new_key)
{
    Node *new_node = new Node();
    new_node->data = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

bool search(Node *head, int x)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}
int main()
{
    bool exit = false;
    char YesNo;
    while (!exit)
    {
        struct Node *head;
        struct Node *second;
        struct Node *third;
        struct Node *fourth;

        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node *)malloc(sizeof(struct Node));
        fourth = (struct Node *)malloc(sizeof(struct Node));

        head->data = 7;
        head->next = second;

        second->data = 11;
        second->next = third;

        third->data = 25;
        third->next = fourth;

        fourth->data = 66;
        fourth->next = NULL;

        cout << "\nLinked list after traversing: " << endl;
        linkedlisttraverse(head);
        cout << endl;
        int n;
        cout << "1. Insert a new Element\n";
        cout << "2. Delete an existing element\n";
        cout << "3. Search an Element\n";
        cout << "4. Display all Elements\n";
        cout << "Enter Between 1-4: ";
        cin >> n;
        cout << endl;
        switch (n)
        {
        case 1:
            cout << "Linked list before Insertion: " << endl;
            printList(head);
            cout << endl;
            cout << "\nPerforming Insertion Operations. .. \n\n";
            cout << "\nLinked list after insertion at first: " << endl;
            head = insertatfirst(head, 56);
            printList(head);
            cout << endl;
            cout << "\nLinked list after insertion at any index: " << endl;
            insertatindex(head, 1, 2);
            printList(head);
            cout << endl;
            cout << "\nLinked list after insertion at end: " << endl;
            head = insertAtEnd(head, 25);
            printList(head);
            cout << endl;
            break;
        case 2:
            cout << "Linked list before Deletion: " << endl;
            printList(head);

            cout
                << endl;
            cout << "\nPerforming Deletion Operations. .. \n\n";
            cout << "\nLinked list after deletion at first: " << endl;
            head = deleteatfirst(head);
            printList(head);
            cout << endl;
            cout << "\nLinked list after deletion at any index: " << endl;
            head = deleteatindex(head, 2);
            printList(head);
            cout << endl;
            cout << "\nLinked list after deletion at end: " << endl;
            head = deleteatend(head);
            printList(head);
            cout << endl;
            break;
        case 3:
            cout << "\nPerforming Searching. .. \n\n";
            search(head, 66) ? cout << "\nElement is present in the Linked
                                   List\n " : cout << "\nElement is not present in the Linked List\n ";
                                   break;
        case 4:
            cout << "\nDisplaying Array. .. \n\n";
            cout << "\nLinked list after all operations: " << endl;
            printList(head);
            break;
        default:
            cout << "\nInvalid Input!!!";
            break;
        }

        cout << " \n \n Do you want to continue? (Y or N) \n";
        cin >> YesNo;
        if (YesNo == 'N' || YesNo == 'n')
        {
            exit = true;
        }
        system("pause");
    }
    return 0;
}