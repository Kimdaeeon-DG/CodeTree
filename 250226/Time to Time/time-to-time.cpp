#include <iostream>

using namespace std;

int a, b, c, d;
int h1, h2, count = 0;

int main() {
    cin >> a >> b >> c >> d;
    h1 = a*60 + b;
    h2 = c*60 + d;
    
    while(h1 != h2) {
        h1++;
        count++;
    }
    cout << count;

    return 0;
}