
/*
in bubble sort compare 2 index in a pass
5
2 6 1 4 8
ascending
in first pass compare 2 and 6
2!>6 so no change
if 6 in first index then 2;
6>2 so they will change their index by swaping
2 6.then 6>1 after swap 2 1 6
in first pass 2 1 4 6 8
in bubble sort for each pass the max value find it's position

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // int min=a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if (a[j] > a[j+1])
             {
               
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
             }
        }
     
    }
    for (int i = 0; i < n; i++)
     {
        cout << a[i] << " ";
    // std::cout << std::endl;
     }
}