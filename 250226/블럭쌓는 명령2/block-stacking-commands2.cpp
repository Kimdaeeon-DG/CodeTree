#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int a, b;
int arr[101] = {0, };
int answer = 0;

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> a >> b;

        for (int j = a; j < b + 1; j ++) {
            arr[j]++;
        }
    }

    for (int i = 0; i < N; i ++) {
        if (answer < arr[i]) {
            answer = arr[i];
        }
    } 
    cout << answer;
    return 0;
}