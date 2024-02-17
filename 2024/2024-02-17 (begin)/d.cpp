#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    vector<long long> divisors;
    long long count = 0, dividend = min(N, M);
    while (count < K) {
        bool dN = dividend % N == 0;
        bool dM = dividend % M == 0;
        if ((dN && !dM) || (!dN && dM)) {
            divisors.push_back(dividend);
            count++;
        }
        dividend++;
    }


    if (K > divisors.size()) {
        cout << -1 << endl;
    } else {
        cout << divisors[K - 1] << endl;
    }

    return 0;
}