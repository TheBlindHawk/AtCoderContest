#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num && num != 0) {
        numbers.push_back(num);
    }

    numbers.push_back(0);
    
    reverse(numbers.begin(), numbers.end());
    
    for (int i : numbers) {
        cout << i << endl;
    }
    
    return 0;
}