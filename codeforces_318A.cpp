#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        cout << 1 + (k - 1) * 2 << endl;
    } else {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}

