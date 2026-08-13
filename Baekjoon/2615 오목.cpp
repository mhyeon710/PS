#include <iostream>
using namespace std;

int main() {

    int arr[19][19];
    for (int i=0; i<19; i++) {
        for (int j=0; j<19; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    int x = -1, y = -1;

    for (int i=0; i<19; i++) {
        for (int j=0; j<=19-5; j++) {
            for (int t=1; t<5; t++) {
                if (arr[i][j] == 0) continue;
                if (arr[i][j] != arr[i][j+t]) break;
                if (t == 4) {
                    if (j-1 >= 0 && arr[i][j] == arr[i][j-1]) continue;
                    if (j+5 < 19 && arr[i][j] == arr[i][j+5]) continue;
                    ans = arr[i][j];
                    x = i, y = j;
                }
            }
        }
    }

    for (int i=0; i<=19-5; i++) {
        for (int j=0; j<19; j++) {
            for (int t=1; t<5; t++) {
                if (arr[i][j] == 0) continue;
                if (arr[i][j] != arr[i+t][j]) break;
                if (t == 4) {
                    if (i-1 >= 0 && arr[i][j] == arr[i-1][j]) continue;
                    if (i+5 < 19 && arr[i][j] == arr[i+5][j]) continue;
                    ans = arr[i][j];
                    x = i, y = j;
                }
            }
        }
    }

    for (int i=0; i<=19-5; i++) {
        for (int j=0; j<=19-5; j++) {
            for (int t=1; t<5; t++) {
                if (arr[i][j] == 0) continue;
                if (arr[i][j] != arr[i+t][j+t]) break;
                if (t == 4) {
                    if (i-1 >= 0 && j-1 >= 0 && arr[i][j] == arr[i-1][j-1]) continue;
                    if (i+5 < 19 && j+5 < 19 && arr[i][j] == arr[i+5][j+5]) continue;
                    ans = arr[i][j];
                    x = i, y = j;
                }
            }
        }
    }

    for (int i=4; i<19; i++) {
        for (int j=0; j<=19-5; j++) {
            for (int t=1; t<5; t++) {
                if (arr[i][j] == 0) continue;
                if (arr[i][j] != arr[i-t][j+t]) break;
                if (t == 4) {
                    if (i+1 < 19 && j-1 >= 0 && arr[i][j] == arr[i+1][j-1]) continue;
                    if (i-5 >= 0 && j+5 < 19 && arr[i][j] == arr[i-5][j+5]) continue;
                    ans = arr[i][j];
                    x = i, y = j;
                }
            }
        }
    }

    cout << ans << '\n';
    if (ans) cout << x+1 << ' ' << y+1;

    return 0;
}