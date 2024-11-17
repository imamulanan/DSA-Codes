#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to print all elements in the linked list
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Function to delete a node at a specified position
void delete_node(Node*& head, int pos) {
    // Case 1: Empty list
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    // Case 2: Deleting the head node
    if (pos == 1) {
        Node* toDelete = head;
        head = head->next; // Move head to the next node
        delete toDelete;   // Delete the old head
        return;
    }

    // Traverse to the node just before the target position
    Node* tmp = head;
    for (int i = 1; i < pos - 1 && tmp->next != NULL; i++) {
        tmp = tmp->next;
    }

    // Case 3: If position is out of bounds
    if (tmp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    // Case 4: Deleting the node at the specified position
    Node* toDelete = tmp->next;
    tmp->next = toDelete->next; // Bypass the node to delete
    delete toDelete;            // Delete the target node
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n, value, pos;

    // Asking the user for the number of elements
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    // Taking input for each element in the list
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Original list
    cout << "Original list: ";
    print_linked_list(head);

    cout << "Enter the position to delete: ";
    cin >> pos;

    // Deleting the node at the given position
    delete_node(head, pos);

    // Modified list
    cout << "Modified list: ";
    print_linked_list(head);

    return 0;
}
