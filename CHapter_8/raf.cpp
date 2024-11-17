#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
vector<int>v[N];
bool vis[N];
int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
}