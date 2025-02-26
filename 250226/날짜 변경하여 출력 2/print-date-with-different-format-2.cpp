#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    char c;
    cin >> m >> c >> d >> c >> y;
    c = '.';
    cout << y << c << m << c << d;
    return 0;
}