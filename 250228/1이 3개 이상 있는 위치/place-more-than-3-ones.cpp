#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int answer = 0;
int nx, ny, count;

bool InRange(int x, int y) {
    return (0 <= x && x < 5 && 0 <= y && y < 5);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count = 0;
            for (int k = 0; k < 4; k++) {
                nx = j + dy[k];
                ny = i + dx[k];
                if (InRange(nx, ny)) {
                    if (grid[ny][nx]) count++;
                }
            }
            if (count >= 3) {
                answer++;
            }
        }
    }

    cout << answer;

    return 0;
}