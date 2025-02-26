#include <iostream>
using namespace std;

int N;
int x1, y1, x2, y2;
int arr[210][210] = {0, };
int answer = 0;


int main() {
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j < x2; j++){
            for (int k = y1; k < y2; k++) {
                arr[j+100][k+100] = 1; 
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