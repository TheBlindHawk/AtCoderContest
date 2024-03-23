#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) { cin >> A[i]; }

    int M; cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++) { cin >> B[i]; }

    int L; cin >> L;
    vector<int> C(L);
    for (int i = 0; i < L; i++) { cin >> C[i]; }

    int Q; cin >> Q;
    vector<int> X(Q);
    for (int i = 0; i < Q; i++) { cin >> X[i]; }

    set<int> sums;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < L; k++) {
                sums.insert(A[i] + B[j] + C[k]);
            }
        }
    }

    for (int i = 0; i < Q; i++) {
        if (sums.count(X[i]) > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}