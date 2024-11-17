// C++ program to insert new element to Heap
#include <iostream>
using namespace std;

#define MAX 1000 // Max size of Heap

// Function to heapify ith node in a Heap
// of size n following a Bottom-up approach

void heapify(int arr[], int n, int i)
{
    // find parents
    int parent = (i - 1) / 2;
    if (parent >= 0)
    {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);
            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }
    }
}

// Function to insert a new node to the Heap
void insertNode(int arr[], int &n, int key)
{
    n = n + 1;        // Increase the size of Heap by 1
    arr[n - 1] = key; // Insert the element at end of Heap
    // Heapify the new node following a
    // Bottom-up approach
    heapify(arr, n, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[MAX] = {10, 5, 3, 2, 4};
    int n = 5;
    int key = 15;
    insertNode(arr, n, key);
    printArray(arr, n);
    return 0;
}