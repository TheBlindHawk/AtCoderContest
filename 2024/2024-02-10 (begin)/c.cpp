#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N; cin >> N;
    long long totalAmount = 0;
    vector<long long> Vec;
    Vec.push_back(N);
    
    while (Vec.size() > 0){
        vector<long long> newVec;
        for (long long a: Vec) {
            totalAmount += a;
            long long n1 = a / 2;
            long long n2 = (a + 1) / 2;
            if(n1 > 1) newVec.push_back(n1);
            if(n2 > 1) newVec.push_back(n2);
        }
        Vec = newVec;
    }

    cout << totalAmount << endl;

    return 0;
}
