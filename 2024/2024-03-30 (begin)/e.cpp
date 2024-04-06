#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<int> A(N);
    set<int> S;
    
    for (int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        
        if (S.count(x)) {
            S.erase(x);
        } else {
            S.insert(x);
        }
        
        for (int j = 0; j < N; j++) {
            if (S.count(j+1)) {
                A[j] += S.size();
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}