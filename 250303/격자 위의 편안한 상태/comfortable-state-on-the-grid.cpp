#include <iostream>

using namespace std;

int N, M;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int nx, ny;
int area[101][101] = {0, };
int x, y;
int count;

int InRange(int x, int y) {
    return 1 <= x && x <= N && 1 <= y && y <= N;
}

int main() {
    cin >> N >> M;

    for (int i = 1; i <= M; i++) {
        cin >> y >> x;
        area[y][x] = 1;
        count = 0;
        for (int j = 0; j < 4; j++) {
            nx = x + dx[j];
            ny = y + dy[j];
            if (InRange(nx, ny) && area[ny][nx]) count++;
        }
        if (count == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}