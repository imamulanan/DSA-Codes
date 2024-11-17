#include <bits/stdc++.h>
using namespace std;
#define V 6
int adj[V][V] = {0};
void addEdge(int src, int dest)
{

    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

int main()
{

    int numEdges;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    cout << "Enter the edges (source destination):\n";
    for (int i = 0; i < numEdges; i++)
    {
        int src, dest;
        cin >> src >> dest;
        addEdge(src, dest);
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}