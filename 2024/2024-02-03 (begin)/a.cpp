#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    int dotIndex = input.find_last_of('.');
    cout << input.substr(dotIndex + 1) << endl;
}