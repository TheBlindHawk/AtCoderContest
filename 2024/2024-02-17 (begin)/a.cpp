#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    string result = "1";
    for (int i = 0; i < N; i++) {
        result += "01";
    }

    cout << result << endl;

    return 0;
}