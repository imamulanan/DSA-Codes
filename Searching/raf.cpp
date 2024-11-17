#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int l=0,r=n-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    return -1;
    
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = binarySearch(arr, n, target);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    if (result != -1)
    {
        cout << "Element found in index: " << result+1 << endl;
    }
    else
    {
        cout << "Element doesn't found in index"<<endl;
    }
}