#include <bits/stdc++.h>
using namespace std;
#define V 5
int adj[V][V] = {0};

void addEdge(int src, int dest)
{
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

void deleteNode(int node)
{
    for (int i = 0; i < V; i++)
    {
        adj[node][i]=0;
        adj[i][node]=0;
    }
    
}

int main()
{
    int numEdges;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    cout << "Enter the edges (source destination):\n";
    int src, dest;
    for (int i = 0; i < numEdges; i++)
    {
        cin >> src >> dest;
        addEdge(src, dest);
    }

    int node;
    cin >> node;
    deleteNode(node);

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}