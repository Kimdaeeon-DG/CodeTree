#include <iostream>

using namespace std;

int n, t;
int x, y;
char d;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int nx, ny, dir_num;

bool InRange(int x, int y) {
    return 0 < x && x < n && 0 < y && y < n;
}

void direction() {
    if (d == 'R') dir_num = 0;
    else if (d == 'D') dir_num = 1;
    else if (d == 'L') dir_num = 2;
    else dir_num = 3;
}

int main() {
    cin >> n >> t;
    cin >> y >> x >> d;

    direction();
    for (int i = 0; i < t; i++) {
        nx = x + dx[dir_num];
        ny = y + dy[dir_num];
        if (InRange(nx, ny)) {
            x = nx;
            y = ny;
        }
        else dir_num = (dir_num + 2) % 4;
    }

    cout << y << ' ' << x;


    return 0;
}