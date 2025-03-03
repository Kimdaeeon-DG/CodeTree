#include <iostream>

using namespace std;

int n, m;
int arr[100][100] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int x = 0, y = 0;
int nx, ny, dir_num = 0;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;

    arr[y][x] = 1;
    for (int i = 2; i <= m * n; i++) {
        nx = x + dx[dir_num];
        ny = y + dy[dir_num];
        if (!InRange(ny, nx) || arr[ny][nx] != 0) dir_num = (dir_num + 1) %4;
        x = x + dx[dir_num];
        y = y + dy[dir_num];
        arr[y][x] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

