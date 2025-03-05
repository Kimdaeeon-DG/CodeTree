#include <iostream>
#include <cmath>

using namespace std;

int N, K;
int arr[10001] = {0, };
int x;
char c;
int answer = 0;

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x >> c;
        if (c == 'G') arr[x-1] = 1;
        else arr[x-1] = 2;
    }

    for (int i = 0; i < K; i++) {
        int count = 0;
        for (int j = i; j <= N + i; j++) {
            count += arr[j];
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}