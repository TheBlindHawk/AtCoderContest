#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> adjMatrix(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> adjMatrix[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        vector<int> connectedVertices;
        for (int j = 0; j < N; j++) {
            if (adjMatrix[i][j] == 1) {
                connectedVertices.push_back(j + 1);
            }
        }
        for (int vertex : connectedVertices) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    
    return 0;
}