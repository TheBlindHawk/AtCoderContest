#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    vector<string> substrings;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            string substring = S.substr(i, j);
            substrings.push_back(substring);
        }
    }

    sort(substrings.begin(), substrings.end());
    substrings.erase(unique(substrings.begin(), substrings.end()), substrings.end());

    int count = substrings.size();
    cout << count << endl;

    return 0;
}