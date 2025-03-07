#include <iostream>

using namespace std;

int n;
int r, c;
int a[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    cin >> n >> r >> c;
    int x = r - 1, y = c - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int dir_num = 0;
    cout << a[y][x] << ' ';
    while (dir_num < 4) {
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num]; 
        if (InRange(nx, ny)) {
            if (a[ny][nx] > a[y][x]) {
                cout << a[ny][nx] << ' ';
                x = nx;
                y = ny;
                dir_num = 0;
            }
        }
        dir_num++;
    }

    return 0;
}
