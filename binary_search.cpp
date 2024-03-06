#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int x)
{
    while (l <= h) {
        int m = l+h / 2;
 
        if (arr[m] == x)
            return m;
 
       else if (arr[m] < x)
             l = m + 1;
        else 
            h = m - 1;
    }
    return -1;
}
 

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}