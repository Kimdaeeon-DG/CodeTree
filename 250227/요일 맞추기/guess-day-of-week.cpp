#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int month_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int cnt1 = 0, cnt2 = 0, tmp;
int m1, d1, m2, d2;

void dayCount() {
    for (int i = 0; i < m1; i++) {
        cnt1 += month_of_days[i];
    }
    cnt1 += d1;

    for (int i = 0; i < m2; i++) {
        cnt2 += month_of_days[i];
    }
    cnt2 += d2;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    dayCount();
    tmp = (cnt2-cnt1) % 7;
    if (tmp < 0) tmp += 7;
    cout << day[tmp];
    
    return 0;
}