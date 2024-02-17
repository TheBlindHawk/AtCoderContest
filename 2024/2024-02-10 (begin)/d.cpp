#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> B(N), X(N);
    vector<pair<long long, long long>> dp;
    for (int i = 0; i < N-1; i++) {
        int n;
        cin >> n >> B[i] >> X[i];
        dp.push_back({n, 0});
    }

    for (int i = 0; i < N-1; i++) {
        vector touched(N, false);
        long long current = i;
        long long total = dp[i].second;
        while (touched[current] == false) {
            dp[current].second = min(dp[current].second, total);
            total += dp[current].second;
            touched[current] = true;
            current = dp[current].first;
        }
    }

    cout << dp[N].first << endl;

    return 0;
}
