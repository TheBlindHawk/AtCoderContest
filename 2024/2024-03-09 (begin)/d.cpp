#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string T; cin >> T;
    int N; cin >> N;

    vector<pair<int, int>> breakpoints;
    breakpoints.push_back(make_pair(0, 1));
    int min_coins = -1;

    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        vector<pair<int, int>> bCopy = breakpoints;
        for (int j = 0; j < A; j++) {
            string S; cin >> S;
            for (pair<int, int> b : bCopy) {
                string sub = T.substr(b.first);

                if(min_coins != -1 && b.second >= min_coins) {
                    continue;
                }

                if (sub == S) {
                    if(min_coins == -1 || b.second < min_coins) {
                        min_coins = b.second;
                    }
                    continue;
                }

                if (sub.rfind(S, 0) == 0) {
                    breakpoints.push_back(make_pair(b.first + S.length(), b.second + 1));
                }
            }
        }
    }

    cout << min_coins << endl;
}