#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long N, K;
    vector<long long> A;
    cin >> N >> K;
    for (long long i = 0; i < N; i++) {
        long long a;
        cin >> a;
        if(a > 0 && a <= K) {
            A.push_back(a);
        }
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    long long sub = 0;

    for (long long a : A) { sub += a; }

    long long sum = (long long) K * (K + 1) / 2 - sub;

    cout << sum << endl;

    return 0;
}
