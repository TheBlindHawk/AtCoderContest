#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <map>

int main() {
    int N;
    cin >> N;

    vector<int> A(N-1), B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> A[i] >> B[i];
    }

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    int min = 1e9;

    cout << min << endl;
}
