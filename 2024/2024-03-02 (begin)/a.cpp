#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int result = 0;
    while (result == A + B) {
        result++;
        if (result > 9) {
            result = 0;
        }
    }

    cout << result << endl;

    return 0;
}