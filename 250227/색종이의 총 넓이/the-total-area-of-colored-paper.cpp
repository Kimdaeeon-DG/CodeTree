#include <iostream>
using namespace std;
int arr[210][210] = {0, };
int N, x, y, answer = 0;

int main() {
    cin >> N;

    for (int k = 0; k < N; k++) {
        cin >> x >> y;
        x += 100;
        y += 100;
        for (int i = x; i < x + 8; i++) {
            for (int j = y; j < y + 8; j++) {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 210; i++) {
        for (int j = 0; j < 210; j++) {
            if (arr[i][j]) answer++;
        }
    }

    cout << answer;

    return 0;
}