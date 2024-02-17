#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<long long> S(N - 1), T(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> S[i] >> T[i];
    }
    
    long long currency = A[0];
    for (int i = 0; i < N - 1; i++) {
        currency = currency/ S[i] * T[i];
        currency += A[i + 1];
    }
    
    cout << currency << endl;
    
    return 0;
}
