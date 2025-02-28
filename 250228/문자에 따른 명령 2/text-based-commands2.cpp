#include <iostream>
#include <string>
using namespace std;

int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int dir_num = 3;
int x = 0, y = 0;
string arr;

void direction(int i) {
    if (arr[i] == 'L') dir_num = (dir_num + 3) % 4;
    else if (arr[i] == 'R') dir_num = (dir_num + 1) % 4;
    else {
        x += dx[dir_num];
        y += dy[dir_num];
    }
}


int main() {
    cin >> arr;
    for (int i = 0; i < arr.length(); i++) {
        direction(i);
    }

    cout << x << ' ' << y;

    return 0;
}