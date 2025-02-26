#include <iostream>
using namespace std;

int m1, d1, m2, d2, cnt = 0;
int month_in_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    while(!(m1 == m2 && d1 == d2)) {
        if (d1 > month_in_days[m1]) {
            m1 += 1;
            d1 = 1;
        }
        d1++;
        cnt++;
    }
    cout << cnt + 1;
    return 0;
}