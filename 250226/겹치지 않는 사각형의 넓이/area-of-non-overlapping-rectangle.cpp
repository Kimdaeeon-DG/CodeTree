#include <iostream>
using namespace std;

int x1, y1, x2, y2;
int arr[2010][2010] = {0, };
int answer = 0;

void setArea(int n) {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;
    for (int i = y1; i < y2; i++) {
        for (int j = x1; j < x2; j++) {
            arr[i][j] = n;
        }
    }
}

int main() {
    setArea(1);
    setArea(1);
    setArea(0);

    for (int i = 0; i < 2010; i++) {
        for (int j = 0; j < 2010; j ++) {
            if (arr[i][j]) answer++;
        }
    } 

    cout << answer;
    return 0;
}