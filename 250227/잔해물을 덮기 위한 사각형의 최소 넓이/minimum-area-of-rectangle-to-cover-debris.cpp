#include <iostream>
using namespace std;

int x1, y1, x2, y2;
int min_x = 2010, max_x = 0, min_y= 2010, max_y = 0;
int arr[2010][2010] = {0, };

void changeNum(int n) {
    x1 += n;
    x2 += n ;
    y1 += n;
    y2 += n;
}

void getArea(int n) {
    cin >> x1 >> y1 >> x2 >> y2;
    changeNum(1000);
    for (int i = y1; i < y2; i++) {
        for (int j = x1; j < x2; j++) {
            arr[i][j] = n;
        } 
    }
}

int main() {
    getArea(1);
    getArea(0);

    for (int i = 0; i < 2010; i++) {
        for (int j = 0; j < 2010; j++) {
            if (arr[i][j] && min_x > j) min_x = j;
            if (arr[i][j] && max_x < j) max_x = j;
            if (arr[i][j] && min_y > i) min_y = i;
            if (arr[i][j] && max_y < i) max_y = i;
        }
    }
    
    cout << (max_x - min_x + 1) * (max_y - min_y + 1);
    return 0;
}