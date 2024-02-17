#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> B(M);
    for (long long i = 0; i < M; i++) {
        cin >> B[i];
    }

    for (long long y: B) {
        long long split = A[y];
        A[y] = 0;
        for (long long i = 1; i <= split; i++) {
            A[(y+i) % N] += 1;
        }
    }

    for (long long i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
