#include <iostream>

using namespace std;

int n;
int x1, x2;
int arr[210];
int answer = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;

        for (int i = x1; i < x2; i++){
            arr[i + 100]++;
        }
    }
    
    for (int i = 0; i < 210; i ++) {
        if (arr[i] > answer) {
            answer = arr[i];
        }
    }
    cout << answer;
    return 0;
}