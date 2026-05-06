#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <int> g[100001];
int w[100001], sum, ans = 2e9;
pii edge;

int dfs(int prev, int now) {
    if (g[now].size() == 1) {
        int diff = abs(w[now] + w[now] - sum);
        if (diff < ans) {
            ans = diff;
            edge = {prev, now};
            return w[now];
        }
    }
    
    int temp = 0;
    for (auto next:g[now]) {
        if (next == prev) continue;
        temp += dfs(now, next);
    }

    temp += w[now];
    int diff = abs(temp + temp - sum);
    if (diff < ans) {
        ans = diff;
        edge = {prev, now};
    }

    return temp;
}

int main() {
    fio();
    int N;
    cin >> N;

    for (int i=0; i<N-1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i=1; i<=N; i++) {
        cin >> w[i];
        sum += w[i];
    }

    for (int i=1; i<=N; i++) {
        if (g[i].size() == 1) {
            dfs(i, g[i][0]);

            int diff = abs(w[i] + w[i] - sum);
            if (diff < ans) {
                ans = diff;
                edge = {i, g[i][0]};
            }

            break;
        }
    }

    cout << ans << '\n' << edge.first << ' ' << edge.second;
    return 0;
}