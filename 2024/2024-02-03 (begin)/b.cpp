#include <iostream>
#include <string>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    char grid[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            grid[i][j] = '.';
        }
    }

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    int x = 0, y = 0;
    int direction = 0;

    for (int i = 0; i < N; i++) {
        if (grid[x][y] == '.') {
            grid[x][y] = '#';
            // 90 degrees clockwise
            direction = (direction + 1) % 4;
        } else {
            grid[x][y] = '.';
            // 90 degrees counterclockwise
            direction = (direction + 3) % 4;
        }

        // Move forward one cell in the current direction
        x = (x + dx[direction] + H) % H;
        y = (y + dy[direction] + W) % W;
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
