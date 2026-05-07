#include <iostream>
using namespace std;

int dice[3][7], x;
int main() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<6; j++) {
            cin >> x;
            dice[i][x]++;
        }
    }

    double cnt = 0;
    cnt += dice[0][4] * dice[1][5] * dice[2][6];
    cnt += dice[0][4] * dice[1][6] * dice[2][5];
    cnt += dice[0][5] * dice[1][4] * dice[2][6];
    cnt += dice[0][5] * dice[1][6] * dice[2][4];
    cnt += dice[0][6] * dice[1][4] * dice[2][5];
    cnt += dice[0][6] * dice[1][5] * dice[2][4];

    cout << cnt/216;
}
