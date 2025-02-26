#include <iostream>
#include <algorithm>
using namespace std;
int N, x1, x2;
int arr[105] = {0, };

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x1 >> x2;
        for (int j = x1; j < x2 + 1; j++) {
            arr[j] += 1;
        }
    }

    cout << *max_element(arr, arr + 105);

    return 0;
}