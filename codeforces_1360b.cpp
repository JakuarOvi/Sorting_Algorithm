/*
 in this problem we don't need to separate two team,
first of all we should sorted acending or descending order
first we take test case ,
then array size
then element,
we can use bubble sort,selection sort or insertion sort as our opinion
5
1 2 6 4 3


output
1
sorted: 6 4 3 2 1
we should substract each element a[i]-a[i+1] and take the minimum value as output
6-4=2
4-3=1
3-2=1
2-1=1

*/

// insertion sort decending order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Insertion sort in descending order
        for(int i = 1; i < n; i++)
        {
            int temp = a[i];
            int j = i - 1;

            while(j >= 0 && a[j] < temp)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }

        int dif, s, min_diff;
        dif = a[0] - a[1];

        for(int i = 0; i < n - 1; i++)
        {
            s = a[i] - a[i + 1];
            if(dif >= s)
            {
                dif = s;
            }
        }

        cout << dif << endl;
    }

    return 0;
}
