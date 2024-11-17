#include <bits/stdc++.h>
using namespace std;
class Node // a class is used to define a blueprint for nodes in a linked list
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val; // the keyword this is a pointer that refers to the current instance of the class.
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int find_index(Node *head, int val)
{
    Node* temp = head;
    int current = 0;
    while (temp!=NULL)
    {
        if (temp->val==val) return current;
        temp=temp->next;
        current++;
    }
    

    return -1;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n, val;

    cout << "Enter the number of element: " << endl;
    cin >> n;

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        Node *newNode = new Node(val);
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

    print_linked_list(head);

    int value;
    cin >> value;

    int location = find_index(head, value);

    if (location == -1)
        cout << "Not found in list!";
    else
        cout << " found at location : " << location + 1 << endl;
}