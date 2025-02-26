#include <iostream>
using namespace std;
int N, x, direction = 1, locate = 1000, answer = 0;
char c;
int arr[2010] = {0 ,};


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> c;
        if (c == 'L') direction = -1;
        else direction = 1;
        for (int j = 0; j < x; j++) {
            locate += direction;
            arr[locate]++;
        }
    }

    for (int i = 0; i < 2010; i++) {
        if (arr[i] > 1) {
            answer++;
        }
    }

    cout << answer;
    return 0;
}