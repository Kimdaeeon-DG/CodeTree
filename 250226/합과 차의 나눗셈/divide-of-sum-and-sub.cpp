#include <iostream>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    cout << (double)(a+b)/(a-b);
}