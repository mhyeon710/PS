#include <bits/stdc++.h>
using namespace std;

char arr[200][200];
int main() {
    int N; cin >> N;

    if (N%4) cout << -1;
    else {


        for (int i=0; i<N; i+=4) {
            for (int j=0; j<N; j+=4) {

                arr[i][j] = arr[i][j+1] = arr[i][j+2] = arr[i+1][j+1] = 'a';
                arr[i+1][j] = arr[i+2][j] = arr[i+3][j] = arr[i+2][j+1] = 'd';
                arr[i][j+3] = arr[i+1][j+2] = arr[i+1][j+3] = arr[i+2][j+3] = 'b';
                arr[i+2][j+2] = arr[i+3][j+1] = arr[i+3][j+2] = arr[i+3][j+3] = 'c';
            }
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}