#include <iostream>

using namespace std;

int n;
char dir;
int dist;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dir_num;
int answer[2] = {0, };

void direction() {
    if (dir == 'E') dir_num = 0;
    else if (dir == 'W') dir_num = 1;
    else if (dir == 'S') dir_num = 2;
    else dir_num = 3;
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir >> dist;
        direction();
        answer[0] += dx[dir_num] * dist;
        answer[1] += dy[dir_num] * dist;
    }


    cout << answer[0] << ' ' << answer[1];

    return 0;
}