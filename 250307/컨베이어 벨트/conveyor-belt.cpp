#include <iostream>

using namespace std;

int n, t;
int tmp;
int u[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    for (int i = 0; i < t; i++) {
        tmp = u[n - 1];

        for (int j = n - 2; j > -1; j--) {
            u[j+1] = u[j];
        }
        u[0] = d[n-1];
        for (int j = n - 2; j > -1; j--) {
            d[j+1] = d[j];
        }
        d[0] = tmp; 
    }

    for (int i = 0; i < n; i++) {
        cout << u[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << d[i] << ' ';
    }
    return 0;
}
