#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int month_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int cnt1, cnt2, tmp;
int m1, d1, m2, d2;

int dayCount(int m, int d) {
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cnt += month_of_days[i];
    }
    cnt += d;
    return cnt;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cnt1 = dayCount(m1, d1);
    cnt2 = dayCount(m2, d2);
    tmp = (cnt2-cnt1) % 7;
    
    if (tmp < 0) tmp += 7;
    
    cout << day[tmp];
    
    return 0;
}