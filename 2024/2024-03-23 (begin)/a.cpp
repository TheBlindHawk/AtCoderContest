#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        B[i] = A[i] * A[i+1];
    }
    
    for (int i = 0; i < N-1; i++) {
        cout << B[i] << " ";
    }
    
    return 0;
}