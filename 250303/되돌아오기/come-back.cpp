#include <iostream>
#include <unordered_map>

using namespace std;

int n, x = 0, y = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

char c;
int g;
int count = 0;

unordered_map<char, int> dict = {
        {'E', 0},
        {'S', 1},
        {'W', 2},
        {'N', 3}
};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c >> g;
        for (int j = 0; j < g; j++) {
            x += dx[dict[c]];
            y += dy[dict[c]];
            count++;
            if (x == 0 && y == 0) {
                cout << count;
                return 0;
            }
        }
    }
    cout << -1;

    return 0;
}
