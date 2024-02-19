#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l;
    int j = h;
    while (i < j) {
        while (a[i] <= pivot) //(a[i] >= pivot) for decending order
            {
            i++;
        }
        while (a[j] > pivot )  // (a[j] < pivot)  for decending order
            {
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
  // when i>j
    swap(a[l], a[j]);
    return j; //here we return the index number of j,because in this condition the pivot find it's right position and we need to sort left and right side also so we have to know the index
}

void quicksort(int a[], int l, int h) {
    if (l < h) {
        int j = partition(a, l, h);
      /*
      when pivot find it's position then we need to sort a[0] to pivot-1,hence we find the j index so we use j-1
      */
        quicksort(a, l, j - 1); 
       /*
      when pivot find it's position then we need to sort a[j+1] to n,hence we find the j index so we use j+11
      */
        quicksort(a, j + 1, h);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
