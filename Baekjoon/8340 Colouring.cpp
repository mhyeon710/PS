#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll cnt;
int N, x;
int arr[2][101];
bool visited[2][101];

vector<vector<pii>> v(101);

void dfs(int u) {
    for (int j=0; j<2; j++) {
        auto [x, y] = v[u][j];

        if (!visited[!x][y]) {
            visited[!x][y] = 1;
            dfs(arr[!x][y]);
        }
    }
}

int main() {
    fio();
    cin >> N;

    for (int i=0; i<2; i++) {
        for (int j=1; j<=N; j++) {
            cin >> x;
            arr[i][j] = x;
            v[x].push_back({i, j});
        }
    }

    for (int i=1; i<=N; i++) {
        if (visited[0][i]) continue;

        cnt++;
        visited[0][i] = 1;
        dfs(arr[0][i]);
    }
    
    cout << (1LL << cnt);
    return 0;
}