#include <iostream>
#include <vector>

int min_array(int n, std::vector<int>& a) {
    int odd_count = 0, even_count = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 != a[i] % 2) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    if (odd_count != even_count) {
        return -1;
    }

    return odd_count;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> a[j];
        }

        int result = min_array(n, a);
        std::cout << result << std::endl;
    }

    return 0;
}
