#include <iostream>

using namespace std;

int n;

void PrintStar(int n) {
    for (int i = 0; i < n; i ++) {
        cout << "* ";
    }
    cout << endl;
    if (n > 1) {
        PrintStar(n-1);
    }
    for (int i = 0; i < n; i ++) {
        cout << "* ";
    }
    cout << endl;
}
int main() {
    cin >> n;

    PrintStar(n);
    return 0;
}