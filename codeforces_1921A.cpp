#include <bits/stdc++.h>

 
int main() {
    int t;
 std::cin >>t;
 
    while (t--) {
        int x[4], y[4];
 
        // Input the coordinates of the corners
        for (int i = 0; i < 4; ++i) {
          std::cin >> x[i] >> y[i];
        }
 
        // Calculate the side length of the square
        int side_length = fmax(abs(x[0] - x[1]), abs(y[0] - y[1]));
 
        // Output the area of the square
       std:: cout << side_length * side_length << std::endl;
    }
 
    return 0;
}
