#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    { // constractor
        this->val = val;
        this->next = NULL;
    }
};

void printTra(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert(Node *head, int p, int vall)
{
    Node *newN = new Node(vall);
    Node *temp = head;
    for (int i = 0; i < p - 1; i++)
    {
        temp = temp->next;
    }
    newN->next = temp->next;
    temp->next = newN;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n, value, pos;

    // Asking the user for the number of elements
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    // Taking input for each element in the list
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Given list: " << endl;
    printTra(head);

    int p;
    cout<<"Enter the position: "<<endl;
    cin >> p;

    int vall;
    cout<<"Enter the value: "<<endl;
    cin >> vall;

    insert(head, p, vall);

    cout << "After insert list: " << endl;
    printTra(head);
}