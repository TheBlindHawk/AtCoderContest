#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string S;
    cin >> S;

    int pos1 = S.find('|');
    int pos2 = S.find('|', pos1 + 1);

    S.erase(pos1, pos2 - pos1 + 1);

    cout << S << endl;

    return 0;
}