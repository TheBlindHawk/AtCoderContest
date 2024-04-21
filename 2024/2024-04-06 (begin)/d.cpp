#include <iostream>
#include <vector>
using namespace std;

int H, W;
vector<string> grid;
vector<vector<bool>> visited;
int startRow, startCol;

bool isValid(int row, int col, int energy) {
    if(row < 0 || row >= H || col < 0 || col >= W) {
        return false;
    }

    if(grid[row][col] == '#' || grid[row][col] == 'S' || energy <= 0) {
        return false;
    }


    if(grid[row][col] == 'T') {
        return true;
    }

    if(visited[row][col] && energy <= grid[row][col]) {
        return false;
    }

    visited[row][col] = true;

    grid[row][col] = energy > grid[row][col] ? energy : grid[row][col];
    energy = grid[row][col] - 1;

    return isValid(row + 1, col, energy) 
        || isValid(row - 1, col, energy) 
        || isValid(row, col + 1, energy) 
        || isValid(row, col - 1, energy);
}

int main() {
    int initialEnergy = 0;
    cin >> H >> W;

    grid.resize(H);
    visited.resize(H, vector<bool>(W, false));

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int row, col, energy;
        char c_energy;
        cin >> row >> col >> c_energy;
        energy = c_energy - '0';
        row--; col--;
        if(grid[row][col] == 'S') {
            startRow = row;
            startCol = col;
            initialEnergy = energy > initialEnergy ? energy : initialEnergy;
        }
        if(grid[row][col] == 'T' || grid[row][col] == '#') {
            continue;
        }
        grid[row][col] = c_energy;
    }

    bool canReach = isValid(startRow + 1, startCol, initialEnergy) 
        || isValid(startRow - 1, startCol, initialEnergy) 
        || isValid(startRow, startCol + 1, initialEnergy) 
        || isValid(startRow, startCol - 1, initialEnergy);

    if(canReach) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}