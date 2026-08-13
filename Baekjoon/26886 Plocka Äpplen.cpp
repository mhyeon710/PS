#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int N, K, maxi = 0;
int arr[2][15];
bool visited[2][15];

void cur(int i, int j, int cnt, int suma) {
    if (cnt == K) return;

    for (int t=0; t<4; t++) {
        int nx = i + dx[t];
        int ny = j + dy[t];

        if (nx < 0 || nx >= 2 || ny < 0 || ny >= N) continue;
        if (visited[nx][ny]) continue;

        maxi = max(maxi, suma + arr[nx][ny]);

        visited[nx][ny] = 1;
        cur(nx, ny, cnt + 1, suma + arr[nx][ny]);
        visited[nx][ny] = 0;
    }
}

int main() {
    fio();
    cin >> N >> K;

    for (int j=0; j<N; j++) cin >> arr[0][j];
    for (int j=0; j<N; j++) cin >> arr[1][j];
    
    maxi = arr[1][0];
    visited[1][0] = 1;
    cur (1, 0, 1, arr[1][0]);

    cout << maxi;
    return 0;
}