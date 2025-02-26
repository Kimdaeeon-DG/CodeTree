#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T, tmp;
    cin >> S >> T;

    tmp = S;
    S = T;
    T = tmp;

    cout << S << endl << T;
    
    return 0;
}