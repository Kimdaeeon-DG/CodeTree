#include <iostream>
using namespace std;

int N;
int x1, y1, x2, y2;
int arr[210][210] = {0, };
int answer = 0;


int main() {
    cin >> N;
    for (int k = 0; k < N; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++){
            for (int j = y1; j < y2; j++) {
                arr[i+100][j+100] = 1; 
            }
        }
    }

    for (int i = 0; i < 210; i++) {
        for (int j = 0; j < 210; j++) {
            if (arr[i][j] == 1) {
                answer++;
            }
        }
    }

    cout << answer;
    return 0;
}