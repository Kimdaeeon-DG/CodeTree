#include <iostream>
using namespace std;

int A, B, C;
int cnt1 = 16511, cnt2;

int main() {
    cin >> A >> B >> C;
    cnt2 = (24 * 60 * A) + (60 * B) + C;

    if (cnt1 < cnt2) cout << cnt2 - cnt1;
    else cout << -1;

    return 0;
}