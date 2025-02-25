#include <iostream>
using namespace std;

int main(void){
    int a = 1, b = 2, c = 3;
    a = b = c = a + b + c;
    cout << a << " " << b << " " << c;
}


