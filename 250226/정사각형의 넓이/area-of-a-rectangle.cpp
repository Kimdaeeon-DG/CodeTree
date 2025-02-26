#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N*N << endl;
    if (N < 5) {
        cout << "tiny";
    }
    return 0;
}