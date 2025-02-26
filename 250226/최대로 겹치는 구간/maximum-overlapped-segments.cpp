#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x1, x2;
int arr[210];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;

        for (int i = x1; i < x2; i++){
            arr[i + 100]++;
        }
    }
    
    cout << *max_element(arr, arr + 210);
    return 0;
}