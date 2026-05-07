#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define MOD     998244353
using namespace std;

int T, N, M, u, v, W;
bool can;

vector <vector<int>> edge(100001);
vector <string> arr;

int visited[100001][10];

void dfs(int i, int j) {
    // cout << i << ' ' << j << endl;
    if (can) return;

    visited[i][j] = 1;

    int nj = (j==W-1 ? 0 : j+1);
    for (auto v: edge[i]) {
        if (arr[v][nj] == 'o') {
            if (visited[v][nj] == 1) {
                can = true;
                return;
            }

            if (visited[v][nj] == 0) {
                dfs(v, nj);
                if (can) return;
            }
        }
    }

    visited[i][j] = 2;
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> T; 
    while (T--) {
        cin >> N >> M;

        for (int i=0; i<M; i++) {
            cin >> u >> v;
            u--; v--;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        for (int i=0; i<N; i++) {
            edge[i].push_back(i);
        }

        cin >> W;
        for (int i=0; i<N; i++) {
            string in;
            cin >> in;
            arr.push_back(in);
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<W; j++) {
                visited[i][j] = 0;
            }
        }
        can = false;
        for (int i=0; i<N; i++) {
            if (arr[i][0] == 'o' && visited[i][0] == 0)
                dfs(i, 0);

            if (can) break;
        }

        if (can) cout << "Yes\n";
        else cout << "No\n";

        for (int i=0; i<N; i++) edge[i].clear();
        arr.clear();
    }

    return 0;
}
