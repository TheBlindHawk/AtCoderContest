#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<int> A;
    for (int i = 0; i < Q; i++) {
        int type, n;
        cin >> type >> n;

        if (type == 1) {
            A.push_back(n);
        } else if (type == 2) {
            cout << A[A.size() - n] << endl;
        }
    }

    return 0;
}
