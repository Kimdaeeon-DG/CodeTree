#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    int count = 0;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == '(') {
            for (int j = i + 1; j < A.length(); j++) {
                if (A[j] == ')') {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}