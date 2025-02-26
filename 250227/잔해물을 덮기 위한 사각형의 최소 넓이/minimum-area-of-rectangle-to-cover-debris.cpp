#include <iostream>
using namespace std;

int x1, y1, x2, y2;
int min_x = 2010, max_x = 0, min_y= 2010, max_y = 0;
int arr[2010][2010] = {0, };

void setNum() {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;
}

void getArea() {
    setNum();
    for (int i = y1; i < y2 + 1; i++) {
        for (int j = x1; j < x2 + 1; j++) {
            arr[i][j] = 1;
        } 
    }
}

void delArea() {
    setNum();
    for (int i = y2; i > y1; i--) {
        for (int j = x2; j > x1; j--) {
            arr[i][j] = 0;
        } 
    }
}

int main() {
    getArea();
    delArea();

    for (int i = 0; i < 2010; i++) {
        for (int j = 0; j < 2010; j++) {
            if (arr[i][j] && min_x > j) min_x = j;
            if (arr[i][j] && max_x < j) max_x = j;
            if (arr[i][j] && min_y > i) min_y = i;
            if (arr[i][j] && max_y < i) max_y = i;
        }
    }
    
    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}