#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N;
char arr[2000][2000];

void dfs(int nx, int ny) {
    for (int j=ny+1; j<N; j++) {
        if (arr[nx][j] == 'B' || arr[nx][j] == '.') arr[nx][j] = '.';
        else break;
    }
    for (int j=ny-1; j>=0; j--) {
        if (arr[nx][j] == 'B' || arr[nx][j] == '.') arr[nx][j] = '.';
        else break;
    }

    for (int i=nx+1; i<N; i++) {
        if (arr[i][ny] == 'B' || arr[i][ny] == '.') arr[i][ny] = '.';
        else break;
    }

    for (int i=nx-1; i>=0; i--) {
        if (arr[i][ny] == 'B' || arr[i][ny] == '.') arr[i][ny] = '.';
        else break;
    }
}

int main() {
    fio();
    cin >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == '.')
                arr[i][j] = 'B';
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (arr[i][j] == 'O') {
                dfs(i, j);
            }
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}