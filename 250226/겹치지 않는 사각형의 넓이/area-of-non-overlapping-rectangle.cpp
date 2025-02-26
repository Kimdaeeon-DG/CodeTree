#include <iostream>
using namespace std;

int x1, y1, x2, y2;
int arr[2010][2010] = {0, };
int answer = 0;

void setArea(int n) {
    for (int i = y1; i < y2; i++) {
        for (int j = x1; j < x2; j++) {
            arr[i][j] = n;
        }
    }
}

int main() {
    for (int k = 0; k < 2; k++) {
        cin >> x1 >> y1 >> x2 >> y2;
        setArea(1);
    }
    cin >> x1 >> y1 >> x2 >> y2;
    setArea(0);

    for (int i = 0; i < 2000; i++) {
        for (int j = 0; j < 2000; j ++) {
            if (arr[i][j] == 1) {
                answer++;
            }
        }
    } 

    cout << answer;
    return 0;
}