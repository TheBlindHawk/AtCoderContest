#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<pair<int, int>> G;
    for (int i = 0; i < N; i++) {
        int value = A[i];
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] == value) {
                count++;
            }
        }
        G.push_back(make_pair(value, count));
    }

    // code here
    
    return 0;
}
