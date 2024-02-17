#include <bits/stdc++.h>
using namespace std;
/*
in marge sort follow divide and concure algorithm.
first we divide the array to many sub arrays still we find 1 element
lower index=l
higher index=h
mid=(l+h)/2
4 1 20 12 11 9 5
here mid =12(3rd index)
left =l to mid(4 1 20 12)----0 index to 3 index
4 1                20 12
4     1        20     12
righr = mid+1 to h(11 9 5)-----4 index to 6
11 9         5
11     9       5

*/


// Merge function to merge two sorted arrays
void marge(int a[], int l, int mid, int h) {
    // Calculate sizes of the two subarrays to be merged
    int n1 = mid - l + 1;
    int n2 = h - mid;

    // Create temporary arrays to hold the two subarrays
    int left[n1], right[n2];

    // Copy elements from 'a' to 'left' array
    for (int i = 0; i < n1; i++)
        left[i] = a[l + i];

    // Copy elements from 'a' to 'right' array
    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    // Merge the two subarrays back into the original array 'a'
    int i = 0, j = 0, k = l;

    // Compare elements of the two subarrays and merge them in ascending order
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of 'left' array, if any
    while (i < n1) {
        a[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of 'right' array, if any
    while (j < n2) {
        a[k] = right[j];
        j++;
        k++;
    }
}

// Merge Sort function to recursively divide and merge the array
void margeSort(int a[], int l, int h) {
    // Check if there are more than one element in the array
    if (l < h) {
        // Find the middle point
        int mid = l + (h - l) / 2;

        // Recursively sort the first and second halves
        margeSort(a, l, mid);
        margeSort(a, mid + 1, h);

        // Merge the sorted halves
        marge(a, l, mid, h);
    }
}

int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Input the elements of the array
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Perform Merge Sort on the array
    margeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0; 
}
