#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int containers[n];

        // Input the amounts of water in the containers
        for (int i = 0; i < n; ++i) {
            cin >> containers[i];
        }

        // Calculate the target average amount of water
        int target = 0;
        for (int i = 0; i < n; ++i) {
            target += containers[i];
        }
        target /= n;

        // Check if it's possible to equalize the water amounts
        int excess = 0;
        int possible = 1; // 1 represents true, 0 represents false

        for (int i = 0; i < n; ++i) {
            excess += containers[i] - target;

            // If excess becomes negative at any point, it's not possible
            if (excess < 0) {
                possible = 0;
                break;
            }
        }

        // Output the result for the current test case
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
