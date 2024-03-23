#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> A(T), B(T);
    for (int i = 0; i < T; i++) {
        cin >> A[i] >> B[i];
    }

    vector<int> C(N, 0);

    for (int i = 0; i < T; i++) {
        C[A[i]-1] += B[i];
        cout << set<int>(C.begin(), C.end()).size() << endl;
    }

    return 0;
}