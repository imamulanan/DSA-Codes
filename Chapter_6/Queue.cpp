#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // Inserting elements into the queue (enqueue operation)
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << "Elements in queue after insertion:" << endl;
    queue<int> temp = q;  // Temporary copy to display elements
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Deleting elements from the queue (dequeue operation)
    q.pop();  // Removes the first element (10)
    
    cout << "Elements in queue after deletion:" << endl;
    temp = q;  // Reset temp to updated queue for display
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
