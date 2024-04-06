#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <map>

bool isPossible(long long prev, long long next, long long A, long long B) {
    if(next + A < prev) { return false; }
    if (abs(next - prev) >= A) {
        if(next - prev > B) {
            return isPossible(prev, next - (A+B), A, B);
        } else {
            return false;
        }
    } else {
        return true;
    }
}

int main() {
    long long N, A, B;
    cin >> N >> A >> B;
    vector<long long> D(N);
    for (long long  i = 0; i < N; i++) {
        cin >> D[i];
    }

    long long loc = 0, max = 0, min = A;
    long long prev = D[0];
    bool possible = true;
    for (long long  i = 1; i < N; i++) {
        if (isPossible(prev, D[i], A, B)) {
            loc = (D[i] - prev) % (A+B) + loc;
            if (loc > max) { max = loc; }
            if (loc < min) { min = loc; }
            // cout << "loc: " << loc << " max: " << max << " min: " << min << endl;
        } else {
            possible = false;
            break;
        }
        prev = D[i];
    }

    if (possible && max - min <= A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}