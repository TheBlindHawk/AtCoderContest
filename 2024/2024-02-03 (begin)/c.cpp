#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int &x : A) {
        cin >> x;
    }

    long long currentPassengers = 0;
    for (int x : A) {
        currentPassengers = max(0LL, currentPassengers + x); // Using 0LL to specify long long constant
    }

    cout << currentPassengers << endl;
}