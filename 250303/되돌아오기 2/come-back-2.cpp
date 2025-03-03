#include <iostream>
#include <string>

using namespace std;

int x = 0, y = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int count = 0, dir_num = 3;
string order;


int main() {
    cin >> order;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == 'L') dir_num = (dir_num + 3) % 4;
        else if (order[i] == 'R') dir_num = (dir_num + 1) % 4;
        else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
        count++;
        if (x == 0 && y == 0) {
            cout << count;
            return 0;
        }
    }
    cout << -1;

    return 0;
}
