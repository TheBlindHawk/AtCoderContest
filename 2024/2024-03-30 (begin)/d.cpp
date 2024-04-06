#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, C;
    cin >> a >> b >> C;

    // Check if there is a pair (X, Y) that satisfies the conditions
    bool foundPair = false;
    for (int X = 0; X < (1 << 16); X++) {
        int popcountX = __builtin_popcount(X);
        int Y = X ^ C;
        int popcountY = __builtin_popcount(Y);
        if (popcountX == a && popcountY == b) {
            foundPair = true;
            cout << X << " " << Y << endl;
            break;
        }
    }

    if (!foundPair) {
        cout << "No pair found" << endl;
    }

    return 0;
}