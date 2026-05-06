#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
bool visited[200001];
int g[200001], year[200001], cnt;
map <int, int> m;
 
void dfs(int u) {
    visited[u] = 1;
    m[u] = cnt;
 
    int next = g[u];
    if (visited[next]) {
        
        if (!year[next]) {
            int start = m[next];
            // cout << start << '\n';
            for (auto it=m.begin(); it!=m.end(); it++) {
                // cout << it->first << ' ' <<  it->second << '\n';
                if (it->second < start) {
                    year[it->first] = 2 + cnt - start;
                } else {
                    year[it->first] = 2;
                }
            }
        }
        else {
            for (auto it=m.begin(); it!=m.end(); it++) {
                year[it->first] = cnt - it->second + 1 + year[next];
            }
            // year[u] = cnt + year[next];
        }
        // for (int i=1; i<6; i++) cout << year[i] << ' ';
        // cout << endl;
        return;
    }
    
    cnt++;
    dfs(next);
}
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
 
        for (int i=1; i<=N; i++) {
            visited[i] = 0;
            year[i] = 0;
            cin >> g[i];
        }
 
        for (int i=1; i<=N; i++) {
            if (!visited[i]) {
                // cout << "i: " << i << '\n';
                m.clear();
                cnt = 1;
                dfs(i);
            }
        }
 
        int ans = 0;
        for (int i=1; i<=N; i++) {
            // cout << year[i] << ' ';
            ans = max(ans, year[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}