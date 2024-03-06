#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int h,int x)
{  if (l> h) 
    {
    	return -1;
    }
    int mid = (l + h)/2;   
    if (x == a[mid]) 
    {
    	return mid;
    }
    else if (x < a[mid]) 
    {
    	return binary(a, l, mid - 1, x);
    }
    else 
    {
    	return binary(a, mid + 1, h, x);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int result=binary(a,0,n-1,x);
    if(result!=-1)
    {
        cout<<"found in index "<<result;
    }
    else
    {
        cout<<"not found"<<result;
    }
}
    
/*

unsorted 



sort and search

#include <bits/stdc++.h>
using namespace std;

int binary( vector<int>&a, int l, int h, int x) {
    if (l > h) {
        return -1;
    }
    int mid = (l + h) / 2;
    if (x == a[mid]) {
        return mid;
    }
    else if (x < a[mid]) {
        return binary(a, l, mid - 1, x);
    } 
    else {
        return binary(a, mid + 1, h, x);
    }
}

    int main()
    {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    for (int i=0; i<a.size(); i++) {
    cout << a[i] << " "; 
    }
    cout<<endl;

    int x;
    cin >> x;

    int result = binary(a, 0, n - 1, x);
    if (result != -1) {
        cout << "Found at index " << result << endl;
    } 
    else {
        cout << "Not found" << endl;
}
}
*/